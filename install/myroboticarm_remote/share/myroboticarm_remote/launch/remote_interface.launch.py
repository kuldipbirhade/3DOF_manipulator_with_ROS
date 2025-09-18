from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
# from launch.conditions import IfCondition, UnlessCondition
from moveit_configs_utils import MoveItConfigsBuilder
# from moveit_configs_utils.launch_utils import load_yaml
import os 
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node
                                               


def generate_launch_description():

    is_sim_arg = DeclareLaunchArgument(
        "is_sim",
        default_value= "True",
    )

    # use_python_arg = DeclareLaunchArgument(
    #     "use_python",
    #     default_value = "False",
    # )

    is_sim = LaunchConfiguration("is_sim")
    # use_python = LaunchConfiguration("use_python")

    moveit_config = (
        MoveItConfigsBuilder("my_robotic_arm", package_name="myroboticarm_moveit")
        .robot_description(file_path = os.path.join(get_package_share_directory("myroboticarm_description_cpp"), "urdf", "myroboticarm.urdf.xacro"))
        .robot_description_semantic(file_path = "config/myroboticarm.srdf")
        .trajectory_execution(file_path="config/moveit_controllers.yaml")
        .moveit_cpp(file_path = "config/planning_python.api.yaml")  #Under the hood MoveItPy uses cpp so we need to make a new config yaml file
        .to_moveit_configs()
    )


    task_server_node_py = Node(
        package="myroboticarm_remote",
        executable="task_server.py",
        # condition = IfCondition(use_python),
        parameters=[moveit_config.to_dict(),
                    {"use_sim_time": is_sim}]
    )

    # task_server_node = Node(
    #     package="myroboticarm_remote",
    #     executable="task_server_node",
    #     condition = UnlessCondition(use_python),
    #     parameters=[moveit_config.to_dict(),
    #                 {"use_sim_time": is_sim}]
    # )

    return LaunchDescription([
        # use_python_arg,
        is_sim_arg,
        task_server_node_py,
        # task_server_node,
        
    ])