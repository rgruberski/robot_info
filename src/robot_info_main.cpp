#include <robot_info/robot_info_class.hpp>

int main(int argc, char **argv) {
  ros::init(argc, argv, "robot_info");
  ros::NodeHandle nh;
  RobotInfo ri = RobotInfo(&nh);

  ros::Rate rate(1);

  while (ros::ok()) {
    ri.publish_data();
    rate.sleep();
  }
}
