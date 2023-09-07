#pragma once

#include <ros/ros.h>

#include <robot_info/RobotInfo.h>

class RobotInfo {
public:
  RobotInfo(ros::NodeHandle *nh);
  virtual void publish_data();

protected:
  std::string robot_description;
  std::string serial_number;
  std::string ip_address;
  std::string firmware_version;

  robot_info::RobotInfo robot_info;

  ros::Publisher robot_info_publisher;
};
