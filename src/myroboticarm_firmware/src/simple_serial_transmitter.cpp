#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <libserial/SerialPort.h>

using std::placeholders::_1;

// Define the SimpleSerialTransmitter class to communicate with the Arduino over serial
class SimpleSerialTransmitter : public rclcpp::Node
{
public:
  SimpleSerialTransmitter() : Node("simple_serial_transmitter")
  {
    declare_parameter<std::string>("port", "/dev/ttyUSB0");
    std::string port = get_parameter("port").as_string();
    sub = create_subscription<std_msgs::msg::String>("chatter", 10, std::bind(&SimpleSerialTransmitter::msgcallback, this, _1));
    arduino.Open(port);
    arduino.SetBaudRate(LibSerial::BaudRate::BAUD_115200);  // Changed from Libserial to LibSerial
  }
  
  // The class simpleserialtransmitter is open for communication, but now we also need to close the connection
  ~SimpleSerialTransmitter()
  {
    arduino.Close();
  }
  
  void msgcallback(const std_msgs::msg::String &msg)
  {
    RCLCPP_INFO_STREAM(get_logger(), "New message received, publishing on serial port: " << msg.data.c_str());
    arduino.Write(msg.data); // Takes as input the data that we want to publish on the serial port
  }

private:
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub;
  LibSerial::SerialPort arduino;  // Changed from Libserial to LibSerial
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<SimpleSerialTransmitter>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}