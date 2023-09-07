#include "robot_info/robot_info_class.hpp"
#include <robot_info/agv_robot_info_class.hpp>

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle *nh) : RobotInfo(nh) {
  maximum_payload = "100 Kg";
}

void AGVRobotInfo::publish_data() {

  robot_info.robot_description = "robot_description: " + robot_description;
  robot_info.serial_number = "serial_number:" + serial_number;
  robot_info.ip_address = "ip_address: " + ip_address;
  robot_info.firmware_version = "firmware_version:" + firmware_version;
  robot_info.maximum_payload = "maximum_payload: " + maximum_payload;

  robot_info_publisher.publish(robot_info);
}
