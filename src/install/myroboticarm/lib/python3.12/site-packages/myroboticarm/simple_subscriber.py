#!/usr/bin/env python3

import rclpy 
from rclpy.node import Node
from std_msgs.msg import String

class SimpleSubscriber(Node):
    def __init__(self):
        super().__init__("simple_subscriber")
        self.sub = self.create_subscription(String, "chatter", self.msg_callback, 10)


    def msg_callback(self, msg):
        self.get_logger().info("I heard: %s" % msg.data)


def main(args= None):
    rclpy.init(args=args)
    simple_subscriber = SimpleSubscriber()
    rclpy.spin(simple_subscriber)
    rclpy.shutdown()

if __name__ == '__main__':
    main()