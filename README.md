# 🤖 3DOF Manipulator with ROS 2 Jazzy


## Overview

This project demonstrates the simulation of a **3-DOF robotic manipulator** using the **Robot Operating System 2 (ROS 2)** framework.  
It integrates multiple key tools and functionalities of ROS 2 to provide a realistic representation of robotic motion, control, and sensor feedback.

The simulation involves:
- **RViz** for 3D visualization of the manipulator’s structure and movements.  
- **Gazebo** as the physics engine to simulate realistic motion dynamics and interactions with the environment.  
- **URDF (Unified Robot Description Format)** for defining the mechanical structure, geometry, and joint configuration of the manipulator.  
- **ROS 2 Control** framework for configuring and managing the controllers that actuate the manipulator’s joints.  
- **TF2** library for maintaining and transforming coordinate frames between different parts of the robot, enabling consistent spatial awareness.
- **MoveIt 2** for motion planning and trajectory execution, allowing the manipulator to compute collision-free paths and perform automated tasks in simulation.

Through this project, the manipulator’s behavior can be observed both **visually** and **physically simulated**, showcasing how robotic systems are modeled, controlled, and visualized in ROS 2.

---

## Key Features

- **3-DOF Robotic Arm** – Modeled using URDF for accurate link and joint representation.  
- **Full ROS 2 Integration** – Built using ROS 2 nodes, controllers, and configuration files.  
- **Dynamic Simulation** – Uses Gazebo for physics-based simulation with gravity, inertia, and collision properties.  
- **Visualization with RViz** – Real-time visualization of link motion and coordinate frames.  
- **Controller Configuration** – Implemented using `ros2_control` and `ros2_controllers` packages for joint state and position control.  
- **TF2 Support** – Transform tree defined for each joint and link to ensure accurate spatial relationships.
- **MoveIt 2 Integration** – Enables motion planning, trajectory execution, and collision-free path generation.

---

## Project Structure

3DOF_manipulator_with_ROS/
├── src/ # Source code: nodes, controllers, and logic
├── build/ 
├── install/ 
├── log/ 
├── .vscode/ 
└── README.md 


---

## Setup & Installation

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
