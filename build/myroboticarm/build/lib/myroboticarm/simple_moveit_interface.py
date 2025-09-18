#In this script we don't need to make  a class that inherits from node class. We can just give all the instructions in main function itself

import rclpy
from rclpy.logging import get_logger
import numpy as np 
from moveit.planning import MoveItPy
from moveit.core.robot_state import RobotState

def move_robot():  # This is the function that helps in giving the move command to the robot
    myroboticarm = MoveItPy(node_name= "moveit_py" )
    myroboticarm_arm = myroboticarm.get_planning_component("arm")  # Accessing move groups we defined earlier
    myroboticarm_gripper = myroboticarm.get_planning_component("gripper")

    arm_state = RobotState(myroboticarm.get_robot_model())  #Getting the current state of the arm using the robotstate class
    gripper_state = RobotState(myroboticarm.get_robot_model())

    arm_state.set_joint_group_positions("arm", np.array([1.57, 0.0, 0.0]))  #Using the above states that we just defined we can set goal states for the robot
    gripper_state.set_joint_group_positions("gripper", np.array([-0.7,0.7]))

    #Before sending the goal state to the planner, we need to calculate the trajectory to this position. So, we need to 

    myroboticarm_arm.set_start_state_to_current_state()
    myroboticarm_gripper.set_start_state_to_current_state()

    myroboticarm_arm.set_goal_state(robot_state = arm_state)
    myroboticarm_gripper.set_goal_state(robot_state = gripper_state)

    arm_plan_result = myroboticarm_arm.plan()
    gripper_plan_result = myroboticarm_gripper.plan()

    if arm_plan_result and gripper_plan_result: # Checking if the planner was able to calculate a suitable plan from the current state to the desired state
        get_logger("rclpy").info("Planner SUCCEED, moving the arm and the gripper")
        myroboticarm.execute(arm_plan_result.trajectory, controllers=[])  #If the plan was calculated, we execute the result
        myroboticarm.execute(gripper_plan_result.trajectory, controllers=[])
    else:
        get_logger("rclpy").error("One or more planners failed!")


def main():
    rclpy.init()
    move_robot() 
    rclpy.shutdown()

if __name__ == "__main__":
    main()

# To start the node that we just built, we need to make a launch file