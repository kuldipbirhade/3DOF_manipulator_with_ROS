#!/usr/bin/env python

import rclpy 
from rclpy.node import Node
from std_msgs.msg import String

class Simple(Node):
    def __init__(self):
        super().__init__("simple_publisher")
        self.pub_ = self.create_publisher(String, "chatter",10)
        self.counter = 0 
        self.frequency = 1.0
        self.get_logger().info("Publishing at %d Hz" %self.frequency )
        self.create_timer(self.frequency, self.timer_callback)


    def timer_callback(self):
        msg = String()
        msg .data = "Hello ROS2 - counter: %d" % self.counter
        self.pub_.publish(msg)
        self.counter += 1




def main(args=None):
    rclpy.init(args= args)
    simple_publisher = Simple()
    rclpy.spin(simple_publisher)
    rclpy.shutdown()


if __name__ == '__main__':
    main()

