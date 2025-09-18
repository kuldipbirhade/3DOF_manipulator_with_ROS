import rclpy 
from rclpy.node import Node
from myroboticarm_msgs.srv import AddTwoints 

class SimpleServiceServer(Node):  #defining a new class called simplesrviceserver so that we can use the functionality of the service 
    def __init__ (self):          # __init__ this is a special method which runs automatically whenever a new object is created
                                  #def is used to define methods- these are the functions of the class, which here is the Node class
        super().__init__("simple_service_server")  #Initializes ros2 base class i.e. Node class in this case. That is why we use super().__init__ function


        self.service= self.create_service(AddTwoints,"add_two_ints", self.serviceCallback) # This functin requires a specific msg interface to communicate with the service server, which has all the information how the request and response system will work. So we need to create this interface first to make this happen
        self.get_logger().info("Service add_two_ints Ready")


    def serviceCallback(self, req, res):
        self.get_logger().info("New Message Recieved a: %a, b: %d" %(req.a, req.b))
        res.sum = req.a + req.b 
        self.get_logger().info("Returning sum: %d" %res.sum)
        return res
    
def main():
    rclpy.init()
    simple_service_server = SimpleServiceServer()
    rclpy.spin(simple_service_server)
    simple_service_server.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()