#pragma once

#include <robot_info/hydraulic_system_monitor.hpp>
#include <robot_info/robot_info_class.hpp>

class AGVRobotInfo : public RobotInfo {
public:
  AGVRobotInfo(ros::NodeHandle *nh);
  void publish_data();

private:
  std::string maximum_payload;
  HydraulicSystemMonitor hydraulic_system_monitor;
};
