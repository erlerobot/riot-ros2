cmake_minimum_required(VERSION 3.5)
project(micro_2)

find_package(ament_cmake REQUIRED)
find_package(rclc REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(micro_2 main.c)
ament_target_dependencies(micro_2 rclc std_msgs)

install(TARGETS
  micro_2
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
