#!/usr/bin/env python3  

import rclpy 
from rclpy.node import Node
from myroboticarm_msgs.srv import EuToQuater , QuaterToEu
from tf_transformations import quaternion_from_euler, euler_from_quaternion



class AngleConverter(Node):
    def __init__(self):
        super().__init__("angle_conversion_service_server")

        self.eu_to_quater = self.create_service(EuToQuater, "eu_to_quater", self.eutoquater_callback)  # parameters to be specified
        self.quater_to_eu = self.create_service(QuaterToEu, "quater_to_eu", self.quatertoeu_callback)  # parameters to be specified
        self.get_logger().info("Angle conversion services are ready.........")
    
    def eutoquater_callback(self, req, res):
        self.get_logger().info("Request to convert Euler angles roll: %f, pitch: %f, yaw: %f, into Quaternion angles" %(req.roll, req.pitch, req.yaw))
        (res.x, res.y, res.z, res.w) = quaternion_from_euler(req.roll, req.pitch, req.yaw)
        self.get_logger().info("Corresponding quaternion x: %f, y: %f, z: %f, w: %f" %(res.x, res.y, res.z, res.w))
        return res

    def quatertoeu_callback(self, req, res):
        self.get_logger().info("Request to convert Quaternion angles x: %f, y: %f, z: %f, w: %f"  %(req.x, req.y, req.z, req.w))
        (res.roll, res.pitch, res.yaw)= euler_from_quaternion([req.x, req.y, req.z, req.w])
        self.get_logger().info("Corresponding euler roll: %f, pitch: %f, yaw: %f" %(res.roll, res.pitch, res.yaw))
        return res
        
     
def main():
    rclpy.init()
    angle_conversion_service_server = AngleConverter()
    rclpy.spin(angle_conversion_service_server)
    angle_conversion_service_server.destroy_node()
    rclpy.shutdown()        

if __name__ == "__main__":
    main()


    
    