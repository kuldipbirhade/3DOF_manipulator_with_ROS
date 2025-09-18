import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import SetParametersResult
from rclpy.parameter import Parameter


class SimpleParameter(Node):
    def __init__(self):
        super().__init__("simple_parameter")
        self.declare_parameter("simple_int_param", 28)
        self.declare_parameter("simple_string_param", "Kuldip")

        self.add_on_set_parameter_callback(self.paramChangeCallback)

    def paramChangeCallback(self, params):
        result = SetParametersResult()

        for param in params:
            if param.name == "simple_int_param" and param.type == Parameter.Type.INTEGER:
                self.get_logger().info("Param simple_int_param changed! New value: %d" %param.value) 
                result.successful = True 
            if param.name == "simple_string_param" and param.type == Parameter.Type.STRING:
                self.get_logger().info("Param simple_string_param changed! New value: %d" %param.value)
                result.successful = True


        return result
    

def main():
    rclpy.init()
    simple_parameter = SimpleParameter()
    rclpy.spin(simple_parameter)
    rclpy.shutdown()


if __name__ == "__main__":
    main()