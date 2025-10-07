# 🤖 3DOF Manipulator with ROS 2 Jazzy

## 🚀 Overview

This project demonstrates a fully simulated **3-DOF robotic manipulator** implemented using **ROS 2 Jazzy**, with computation handled by a **Raspberry Pi**.  
It uses **Gazebo** for realistic physics simulation, **RViz** for visualization, and **MoveIt 2** for motion planning and trajectory execution.

This repository serves as a **learning project** for understanding robotic arm simulation and a **base framework** for future extensions in real hardware integration or AI-based manipulation.

---

## 🧱 Project Structure

3DOF_manipulator_with_ROS/
├── src/ # Source code: nodes, controllers, and logic
├── build/ 
├── install/ 
├── log/ 
├── .vscode/ 
└── README.md 


---

## 🧠 Key Features

- ✅ **Dynamic simulation:** Realistic physics-based motion via Gazebo  
- ✅ **Interactive visualization:** Full control and state monitoring in RViz  
- ✅ **Motion planning:** Path planning and execution using MoveIt 2  
- ✅ **Hardware-ready computation:** Compatible with Raspberry Pi  
- ✅ **Modular structure:** Easy to extend to more DOF or new sensors  

---

## 🎥 Demo

Watch the 3DOF manipulator in action below 👇  

<video width="720" controls>
  <source src="https://github.com/kuldipbirhade/3DOF_manipulator_with_ROS/blob/main/images/Simultion_demo.mp4?raw=true" type="video/mp4">
</video>

## ⚙️ Setup & Installation

### 1. Prerequisites

Make sure you have the following installed:
- Ubuntu 24.04
- Ros2 Jazzy
- Gazebo Harmonic
- Moveit2

---

### 2. Clone the repository

```bash
git clone https://github.com/kuldipbirhade/3DOF_manipulator_with_ROS.git
cd 3DOF_manipulator_with_ROS
```
### Build Your Workspace
```bash
colcon build
source install/setup.bash
```
### Launch RViz and Gazebo
```bash
ros2 launch myroboticarm_description_cpp display.launch.py
ros2 launch myroboticarm_description_cpp gazebo.launch.py
```
