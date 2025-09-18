#!/usr/bin/env python3
from rclpy.node import Node
import numpy as np
import rclpy 
from rclpy.action import ActionServer
from myroboticarm_msgs.action import MyroboticarmTask
# import time
from moveit.planning import MoveItPy
from moveit.core.robot_state import RobotState


class TaskServer(Node):
    def __init__(self):
        super().__init__("task_server")
        
        self.action_server  = ActionServer(self, MyroboticarmTask, "task_server", self.goalCallback)  # We specify the interface, name and callback function(The callback function will contain all the logic to calculate the fibonacci sequence.),here it is goal calllback function.
        
        self.get_logger().info("Starting the server") # Terminal message indicating the start of the action server created above
        
        self.myroboticarm = MoveItPy(node_name = "moveit_py") #We do this to initialize the moveit api
        
        self.myroboticarm_arm = self.myroboticarm.get_planning_component("arm")
        self.myroboticarm_gripper = self.myroboticarm.get_planning_component("gripper")


    def goalCallback(self, goal_handle):
        self.get_logger().info("Recieved goal request with task number %d" %goal_handle.request.task_number)
        
        arm_state = RobotState(self.myroboticarm.get_robot_model())
        gripper_state = RobotState(self.myroboticarm.get_robot_model())

        arm_joint_goal = []
        gripper_joint_goal = []

        if goal_handle.request.task_number == 0:
            arm_joint_goal = np.array([0.0,0.0,0.0])
            gripper_joint_goal = np.array([-0.7,0.7])

        elif goal_handle.request.task_number == 1 :
            arm_joint_goal = np.array([-1.14,-0.6,-0.07])
            gripper_joint_goal = np.array([0.0,0.0])

        elif goal_handle.request.task_number == 2:
            arm_joint_goal = np.array([-1.57,0.0,-0.9])
            gripper_joint_goal = np.array([0.0,0.0])

        else:
            self.get_logger().error("Invalid Task")
            return
        
        arm_state.set_joint_group_positions("arm", arm_joint_goal)
        gripper_state.set_joint_group_positions("gripper", gripper_joint_goal)

        self.myroboticarm_arm.set_start_state_to_current_state()
        self.myroboticarm_gripper.set_start_state_to_current_state()

        self.myroboticarm_arm.set_goal_state(robot_state = arm_state)
        self.myroboticarm_gripper.set_goal_state(robot_state = gripper_state)

        arm_plan_result = self.myroboticarm_arm.plan()  # The plan function returns an object, so we store it in a variable
        gripper_plan_result = self.myroboticarm_gripper.plan()

        if arm_plan_result and gripper_plan_result:
            self.get_logger().info("Planner SUCCEED, moving the arm and the gripper")
            self.myroboticarm.execute(arm_plan_result.trajectory, controllers =[])
            self.myroboticarm.execute(gripper_plan_result.trajectory, controllers =[])
        else:
            self.get_logger().info("One or more planner failed")

        self.get_logger().info("Goal succeeded")
        goal_handle.succeed()
        result = MyroboticarmTask.Result()
        result.success = True 
        return result



def main():
    rclpy.init()
    task_server = TaskServer()
    rclpy.spin(task_server)
    task_server.destroy_node()
    rclpy.shutdown()
    
    

if __name__ == "__main__":
    main()






