#ifndef MYROBOTICARM_INTERFACE_H
#define MYROBOTICARM_INTERFACE_H
#include <rclcpp/rclcpp.hpp>
#include <hardware_interface/system_interface.hpp>
#include <rclcpp lifecycle/state.hpp>
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

    virtual on_activate(const rclcpp_lifecycle :: State & previous_state) override;
    virtual on_deactivate(const rclcpp_lifecycle :: State & previous_state) override;

    virtual CallbackReturn on_init(const hardware_interface :: HardwareInfo & hardware_info) override;
    virtual std::vector <hardware_interface::StateInterface> export_state_interfaces() override;
    virtual std::vector<hardware_interface::CommandInterface> export_command_interface() override; 

    virtual  hardware_interface::return_type red(const rclcpp::Time & time, const rclcpp::Duration & period) override;
    virtual  hardware_interface::return_type write(const rclcpp::Time & time, const rclcpp::Duration & period) override;


private:
    LibSerial :: SerialPort arduino;
    std::string_port;

    std :: vector<double> position_commands;
    std :: vector<double> prev_postion_commands;
    std :: vector<double> positon_states;
};
}

#endif