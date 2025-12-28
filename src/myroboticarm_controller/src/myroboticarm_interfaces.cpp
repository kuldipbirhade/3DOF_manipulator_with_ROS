#include "myroboticarm_controller/myroboticarm_interfere.hpp"


namespace myroboticarm_controller
{
MyroboticarmInterface::MyroboticarmInterface()
{

}

MyroboticarmInterface::~MyroboticarmInterface()
{
    if(arduino.IsOpen())
    {
        try
        {
            arduino.Close()
        }
    }
}
}