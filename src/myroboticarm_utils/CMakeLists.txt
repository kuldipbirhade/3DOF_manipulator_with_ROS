cmake_minimum_required(VERSION 3.8)
project(myroboticarm_utils)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED) #Because we are using rclpy in a cmake environment
find_package(myroboticarm_utils REQUIRED)  #We need to add this dependency because we used this package for the .srv files which contain the information about the service 

ament_python_install_package(${PROJECT_NAME})  # Because we are using python nodes in a cmkae environment

install(PROGRAMS
  ${PROJECT_NAME}/angle_conversion.py
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
