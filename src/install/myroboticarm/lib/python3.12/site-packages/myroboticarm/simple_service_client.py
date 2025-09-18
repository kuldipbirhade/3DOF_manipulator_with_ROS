import rclpy
from rclpy.node import Node
from myroboticarm_msgs.srv import AddTwoints
import sys


class SimpleServiceClient(Node):
    def __init__(self, a, b ):  #we are using the intergers a and b that we want to add.
        super().__init__("simple_service_client")

        self.client = self.create_client(AddTwoints, "add_two_ints")

        while not self.client.wait_for_service(timeout_sec= 1.0):   # Checking if the service is working or not.
            self.get_logger().info("The service is not available, waiting fo the service to start......")  #Message to state that the service is not working.

        self.request = AddTwoints.Request()    # If the service is working then..
        self.request.a = a 
        self.request.b = b
        self.future = self.client.call_async(self.request)
        self.future.add_done_callback(self.responseCallback)  # The callback function will be executed once we get response from the server, because in the previous line of code we just made a request to the server.
 
    def responseCallback(self, future):
        self.get_logger().info("Service Response %d" %future.result().sum)


def main():
    rclpy.init()

    if len(sys.argv) != 3:   #Checking if the node has started with correct number of arguments
        print("Wrong number of arguments! Usage: simple_service_client A B")
        return -1
    

    

    simple_service_client = SimpleServiceClient(int(sys.argv[1]), int(sys.argv[2]))
    rclpy.spin(simple_service_client)
    simple_service_client.destroy_node
    rclpy.shutdown()

if __name__ == ("__main__"):
    main()