#include "robot_info/hydraulic_system_monitor.hpp"
#include "robot_info/robot_info_class.hpp"
#include <robot_info/agv_robot_info_class.hpp>

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle *nh) : RobotInfo(nh) {
  maximum_payload = "100 Kg";
  hydraulic_system_monitor.set_data("45C", "100%", "250 bar");
}

void AGVRobotInfo::publish_data() {

  robot_info.robot_description = "robot_description: " + robot_description;
  robot_info.serial_number = "serial_number:" + serial_number;
  robot_info.ip_address = "ip_address: " + ip_address;
  robot_info.firmware_version = "firmware_version:" + firmware_version;
  robot_info.maximum_payload = "maximum_payload: " + maximum_payload;

  HydraulicSystemData hydraulic_system_data =
      hydraulic_system_monitor.get_data();

  robot_info.hydraulic_oil_temperature =
      "hydraulic_oil_temperature: " +
      hydraulic_system_data.hydraulic_oil_temperature;
  robot_info.hydraulic_oil_tank_fill_level =
      "hydraulic_oil_tank_fill_level: " +
      hydraulic_system_data.hydraulic_oil_tank_fill_level;
  robot_info.hydraulic_oil_pressure =
      "hydraulic_oil_pressure: " + hydraulic_system_data.hydraulic_oil_pressure;

  robot_info_publisher.publish(robot_info);
}
