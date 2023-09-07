#include "ros/init.h"
#include <robot_info/agv_robot_info_class.hpp>

int main(int argc, char **argv) {
  ros::init(argc, argv, "agv_robot_info");

  ros::NodeHandle nh;

  AGVRobotInfo agv = AGVRobotInfo(&nh);

  ros::Rate rate(1);

  while (ros::ok()) {
    agv.publish_data();
    rate.sleep();
  }
}
