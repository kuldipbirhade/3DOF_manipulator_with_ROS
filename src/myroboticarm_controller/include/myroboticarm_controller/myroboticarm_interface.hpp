#ifndef MYROBOTICARM_INTERFACE_H
#define MYROBOTICARM_INTERFACE_H
#include <rclcpp/rclcpp.hpp>
#include <hardware_interface/system_interface.hpp>
#include <rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp>
#include <rclcpp_lifecycle/state.hpp>
#include <libserial/SerialPort.h>

#include <vector>
#include <string>

namespace myroboticarm_controller
{
using CallbackReturn = rclcpp_lifecycle :: node_interfaces :: LifecycleNodeInterface :: CallbackReturn;

class MyroboticarmInterface : public hardware_interface::SystemInterface 
{
public:
    MyroboticarmInterface();
    virtual ~MyroboticarmInterface();

    virtual CallbackReturn on_activate(const rclcpp_lifecycle :: State & previous_state) override;
    virtual CallbackReturn on_deactivate(const rclcpp_lifecycle :: State & previous_state) override;

    virtual CallbackReturn on_init(const hardware_interface :: HardwareInfo & hardware_info) override;
    virtual std::vector <hardware_interface::StateInterface> export_state_interfaces() override;
    virtual std::vector<hardware_interface::CommandInterface> export_command_interfaces() override; 

    virtual hardware_interface::return_type read(const rclcpp::Time & time, const rclcpp::Duration & period) override;
    virtual hardware_interface::return_type write(const rclcpp::Time & time, const rclcpp::Duration & period) override;


private:
    LibSerial :: SerialPort arduino;
    std::string port;

    std :: vector<double> position_commands;
    std :: vector<double> prev_position_commands;
    std :: vector<double> position_states;
};
}

#endif