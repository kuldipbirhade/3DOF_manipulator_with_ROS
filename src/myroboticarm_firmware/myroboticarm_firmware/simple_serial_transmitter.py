#!/usr/bin/env python3

import rclpy 
from rclpy.node import Node
from std_msgs.msg import String
import serial

class SimpleSerialTransmitter(Node):
    def __init__(self):
        super().__init__("simple_serial_transmitter")

        self.declare_parameter("port", "/dev/ttyUSB0")
        self.declare_parameter("baud_rate", 115200)

        self.port = self.get_parameter("port").value
        self.baud_rate = self.get_parameter("baud_rate").value

        self.sub = self.create_subscription(String, "serial_transmitter", self.msg_callback, 10)
        self.arduino = serial.Serial(port= self.port , baudrate= self.baud_rate, timeout= 0.1) #Used to send serial messages to the arduino 


    def msg_callback(self, msg):  # This is activated when receiving a new message in the serial transmitter topic, now we can send the received message to the serial object using self.arduino
        self.get_logger().info("New message received, publishing on serial: %s" % self.arduino.name)
        self.arduino.write(msg.data.encode("utf-8"))

def main(args= None):
    rclpy.init(args=args)
    simple_serial_transmitter = SimpleSerialTransmitter()
    rclpy.spin(simple_serial_transmitter)
    rclpy.shutdown()

if __name__ == '__main__':
    main()