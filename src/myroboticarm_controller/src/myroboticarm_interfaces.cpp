#include "myroboticarm_controller/myroboticarm_interface.hpp"
#include <hardware_interface/types/hardware_interface_return_values.hpp>
#include <hardware_interface/types/hardware_interface_type_values.hpp>
#include <pluginlib/class_list_macros.hpp>

namespace myroboticarm_controller
{
  
    std::string compensateZeros(int value)
    {

        std::string compensate_zeros = "";

        if(value < 10)
        {
            compensate_zeros = "00";
        }
        else if(value < 100)
        {
            compensate_zeros = "0";
        }
        else
        {
           compensate_zeros = "";
        }
        return compensate_zeros;
    }


MyroboticarmInterface::MyroboticarmInterface()
{

}

MyroboticarmInterface::~MyroboticarmInterface()
{
    if(arduino.IsOpen())
    {
        try
        {
            arduino.Close();
        }
        catch(...)
        {
            RCLCPP_FATAL_STREAM(rclcpp::get_logger("MyroboticarmInterface"), "Failed to close serial port" << port);
        }
    }
}

CallbackReturn MyroboticarmInterface::on_init(const hardware_interface :: HardwareInfo & hardware_info){
    CallbackReturn result= hardware_interface::SystemInterface::on_init(hardware_info);

    if(result != CallbackReturn::SUCCESS)
    {
        return result;
    }

    try
    {
        port = info_.hardware_parameters.at("port");
    }
    catch(const std::out_of_range &e)
    {
        RCLCPP_FATAL(rclcpp::get_logger("MyroboticarmInterface"), "Hardware parameter 'port' not specified");
        return CallbackReturn::FAILURE;
    }

    position_commands.reserve(info_.joints.size());
    position_states.reserve(info_.joints.size());
    prev_position_commands.reserve(info_.joints.size());

    return CallbackReturn::SUCCESS;
}

std::vector<hardware_interface::StateInterface> MyroboticarmInterface::export_state_interfaces()
{
    std::vector<hardware_interface::StateInterface> state_interfaces;
    for (size_t i=0; i < info_.joints.size(); i++)
    {
        state_interfaces.emplace_back(hardware_interface::StateInterface(
            info_.joints[i].name, hardware_interface::HW_IF_POSITION, &position_states[i]));
    }
    return state_interfaces;
}
  
std::vector<hardware_interface::CommandInterface> MyroboticarmInterface::export_command_interfaces()
{
    std::vector<hardware_interface::CommandInterface> command_interfaces;
    for (size_t i=0; i < info_.joints.size(); i++)
    {
        command_interfaces.emplace_back(hardware_interface::CommandInterface(
            info_.joints[i].name, hardware_interface::HW_IF_POSITION, &position_commands[i]));
    }
    return command_interfaces;

}

CallbackReturn MyroboticarmInterface::on_activate(const rclcpp_lifecycle :: State & previous_state) 
{
    RCLCPP_INFO(rclcpp::get_logger("MyroboticarmInterface"), "Activating Robot hardware...");
    position_commands = {0.0, 0.0, 0.0, 0.0};
    prev_position_commands = position_commands;
    position_states = {0.0, 0.0, 0.0, 0.0};

    try
    {
        arduino.Open(port);
        arduino.SetBaudRate(LibSerial::BaudRate::BAUD_115200);
    }
    catch(...)
    {
        RCLCPP_FATAL_STREAM(rclcpp::get_logger("MyroboticarmInterface"), "Failed to open serial port " << port);
        return CallbackReturn::FAILURE;
    }

    RCLCPP_INFO(rclcpp::get_logger("MyroboticarmInterface"), "Robot hardware activated successfully.");
    return CallbackReturn::SUCCESS;

}

CallbackReturn MyroboticarmInterface::on_deactivate(const rclcpp_lifecycle :: State & previous_state)
{
    RCLCPP_INFO(rclcpp::get_logger("MyroboticarmInterface"), "Deactivating Robot hardware...");

    try
    {
        arduino.Close();
    }
    catch(...)
    {
        RCLCPP_FATAL_STREAM(rclcpp::get_logger("MyroboticarmInterface"), "Failed to close serial port" << port);
        return CallbackReturn::FAILURE;
    }

    RCLCPP_INFO(rclcpp::get_logger("MyroboticarmInterface"), "Robot hardware deactivated successfully.");
    return CallbackReturn::SUCCESS;
 }

 hardware_interface::return_type MyroboticarmInterface::read(const rclcpp::Time & time, const rclcpp::Duration & period)
 {
    // Read position states from the robotic arm via serial communication
    // For demonstration, we will simulate reading by copying command to state
    position_states = position_commands;
    return hardware_interface::return_type::OK;
 }

    hardware_interface::return_type MyroboticarmInterface::write(const rclcpp::Time & time, const rclcpp::Duration & period)
    {
            if(position_commands != prev_position_commands)
            {
               return hardware_interface::return_type::OK; 
            }

            std::string msg;
            int base = static_cast<int>(position_commands.at(0) + (M_PI / 2)) * (180.0 / M_PI);
            msg.append("b");
            msg.append(compensateZeros(base));
            msg.append(std::to_string(base));
            msg.append(";");
            int shoulder = static_cast<int>(position_commands.at(1) + (M_PI / 2)) * (180.0 / M_PI);
            msg.append("s");
            msg.append(compensateZeros(shoulder));
            msg.append(std::to_string(shoulder));
            msg.append(";");
            int elbow = static_cast<int>(position_commands.at(2) + (M_PI / 2)) * (180.0 / M_PI);
            msg.append("e");
            msg.append(compensateZeros(elbow));
            msg.append(std::to_string(elbow));
            msg.append(";");
            int gripper = static_cast<int>(-position_commands.at(3) + (M_PI /  2)) * (180.0 / M_PI);
            msg.append("g");
            msg.append(compensateZeros(gripper));
            msg.append(std::to_string(gripper));
            msg.append(";");

            try
            {
                arduino.Write(msg);
            }
            catch(...)
            {
                RCLCPP_ERROR_STREAM(rclcpp::get_logger("MyroboticarmInterface"), "Failed to write to serial port" << msg << " on port " << port);
                return hardware_interface::return_type::ERROR;
            }

            prev_position_commands = position_commands;
            return hardware_interface::return_type::OK;
    }

}


PLUGINLIB_EXPORT_CLASS(
    myroboticarm_controller::MyroboticarmInterface,
    hardware_interface::SystemInterface
)