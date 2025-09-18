from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch.actions import DeclareLaunchArgument , SetEnvironmentVariable , IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, LaunchConfiguration
import os
from ament_index_python.packages import get_package_share_directory
from pathlib import Path


def generate_launch_description():

    myroboticarm_description = get_package_share_directory("myroboticarm_description_cpp")

    model_arg = DeclareLaunchArgument(
        name="model",
        default_value=os.path.join(myroboticarm_description, "urdf", "myroboticarm.urdf.xacro"),
        description= "Absolute path to the robot URDF file"
    )


    gazebo_resource_path = SetEnvironmentVariable(
        name = "GZ_SIM_RESOURCE_PATH",
        value = [
            str(Path(myroboticarm_description).parent.resolve())
        ]
    )

    ros_distro = os.environ["ROS_DISTRO"]
    is_ignition = "True" if ros_distro == "humble" else "False"
    #physics_engine = "" if ros_distro == "humble" else "--physics-engine gz-physics-bullet-featherstone-plugin"   #  Removing physics engine because it might be a problem according to tutorial qna

    robot_description = ParameterValue(Command([
        "xacro ", LaunchConfiguration("model"),
        " is_ignition:=" , is_ignition
        ]),
        value_type=str
        )  


    robot_state_publisher_node = Node(
        package ="robot_state_publisher",
        executable ="robot_state_publisher",
        parameters =[{"robot_description":  robot_description,
                      "use_sim_time":True}]
    )

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            os.path.join(
                get_package_share_directory("ros_gz_sim"),
                "launch"
            ), "/gz_sim.launch.py"]
        ),
        launch_arguments = [
            ("gz_args", [" -v 4 -r empty.sdf " ] )
        ]
    )

    gz_spwan_entity = Node(
        package="ros_gz_sim",
        executable="create",
        output="screen",
        arguments= ["-topic", "robot_description",
                    "-name", "my_robotic_arm"]
    )



    gz_ros2_bridge= Node(
        package = "ros_gz_bridge",
        executable= "parameter_bridge",
        arguments=[
            "/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock",
            "/image_raw@sensor_msgs/msg/Image[gz.msgs.Image",
            "/camera_info@sensor_msgs/msg/CameraInfo[gz.msgs.CameraInfo"
        ]
    )


    return LaunchDescription([
        model_arg,
        gazebo_resource_path,
        robot_state_publisher_node,
        gazebo,
        gz_spwan_entity,
        gz_ros2_bridge,
    ])