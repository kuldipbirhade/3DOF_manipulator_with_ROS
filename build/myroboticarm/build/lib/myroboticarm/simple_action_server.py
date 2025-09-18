from rclpy.node import Node
import rclpy 
from rclpy.action import ActionServer
from myroboticarm_msgs.action import Fibonacci
import time


class SimpleActionServer(Node):
    def __init__(self):
        super().__init__("simple_action_server")
        self.action_server  = ActionServer(self, Fibonacci, "fibonacci", self.goalCallback)  # We specify the interface, name and callback function(The callback function will contain all the logic to calculate the fibonacci sequence.),here it is goal calllback function.
        self.get_logger().info("Starting the server") # Terminal message indicating the start of the action server created above

    def goalCallback(self, goal_handle):
        self.get_logger().info("Recieved goal request with order %d" %goal_handle.request.order)
        feedback_msg = Fibonacci.Feedback() # This is going to inform the client the status of the calculation of the sequence.
        feedback_msg.partial_sequence = [0, 1] #Initializing the feedback by using the first two number s that will always be there

        for i in range(1, goal_handle.request.order):  # this is the main logic of things are working 
            feedback_msg.partial_sequence.append(feedback_msg.partial_sequence[i] + feedback_msg.partial_sequence[i-1]) # So, the feedback_msg is a list, we are appending a new integer to it which is the sum of ith and (i-1)th term ,i.e. the sum of the latest and te term before it.
            self.get_logger().info("Feedback: {0}" .format(feedback_msg.partial_sequence)) # We are printing out log messages in the terminal of the feedback
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)

        goal_handle.succeed()
        result = Fibonacci.Result()
        result.sequence = feedback_msg.partial_sequence
        return result
    

def main():
    rclpy.init()
    simple_action_server = SimpleActionServer()
    rclpy.spin(simple_action_server)
    simple_action_server.destroy_node()
    rclpy.shutdown()
    
    

if __name__ == "__main__":
    main()






