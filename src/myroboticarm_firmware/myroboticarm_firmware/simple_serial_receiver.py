#!/usr/bin/env python3

import rclpy 
from rclpy.node import Node
from std_msgs.msg import String

class Simple(Node):
    def __init__(self):
        super().__init__("simple_serial_receiver")
        self.pub_ = self.create_serial_receiver(String, "serial_receiver",10)
        self.frequency = 0.01
        self.create_timer(self.frequency, self.timer_callback)


    def timer_callback(self):
        msg = String()
        self.pub_.publish(msg)
        self.counter += 1




def main(args=None):
    rclpy.init(args= args)
    simple_serial_receiver = Simple()
    rclpy.spin(simple_serial_receiver)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
