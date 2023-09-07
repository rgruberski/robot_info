#include <robot_info/robot_info_class.hpp>

RobotInfo::RobotInfo(ros::NodeHandle *nh) {
  robot_info_publisher = nh->advertise<robot_info::RobotInfo>("robot_info", 1);
}

void RobotInfo::publish_data() {

  robot_info.robot_description = "robot_description: " + robot_description;
  robot_info.serial_number = "serial_number:" + serial_number;
  robot_info.ip_address = "ip_address: " + ip_address;
  robot_info.firmware_version = "firmware_version:" + firmware_version;

  robot_info_publisher.publish(robot_info);
}
