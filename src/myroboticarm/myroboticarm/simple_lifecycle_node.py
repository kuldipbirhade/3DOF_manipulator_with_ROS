import time
import rclpy
from rclpy.lifecycle import Node, State, TransitionCallbackReturn
from std_msgs.msg import String

class SimpleLifecycleNode(Node):
    def __init__(self, node_name, **kwargs):
       super().__init__(node_name, **kwargs)

    def on_configure(self, state: State) -> TransitionCallbackReturn:  #This is the member of lifecycle node class  # And the on_configure function will return an object of type tran.....
        self.sub = self.create_subscription(String, "chatter", self.msg_callback, 10)
        self.get_logger().info("Lifecycle Node on_configure() called")
        return TransitionCallbackReturn.SUCCESS
    
    def on_shutdown(self, state: State) -> TransitionCallbackReturn:
        self.destroy_subscription(self.sub)
        self.get_logger().info("Lifecycle Node on_shutdown() called")
        return TransitionCallbackReturn.SUCCESS
    
    def on_cleanup(self, state: State) -> TransitionCallbackReturn:
        self.destroy_subscription(self.sub)
        self.get_logger().info("Lifecycle Node on_cleanup() called")
        return TransitionCallbackReturn.SUCCESS
    
    def on_activate(self, state: State) -> TransitionCallbackReturn:
        self.get_logger().info("Lifecycle Node on_activate() called")
        time.sleep(2)
        return super().on_activate(state)

    def on_deactivate(self, state: State) -> TransitionCallbackReturn:
        self.get_logger().info("Lifecycle Node on_de activate() called")
        time.sleep(2)
        return super().on_deactivate(state)
    
    def msg_callback(self, msg):
        current_state = self._state_machine.current_state
        if current_state[1] == "active":
            self.get_logger().info("I heard: %s" % msg.data)

def main():
    rclpy.init()
    executor = rclpy.executors.SingleThreadedExecutor()
    simple_lifecycle_node = SimpleLifecycleNode("simple_lifecycle_node")
    executor.add_node(simple_lifecycle_node)
    try:
        executor.spin()
    except (KeyboardInterrupt, rclpy.executors.ExternalShutdownException):
        simple_lifecycle_node.destroy_node()


if __name__ == "__main__":
    main()