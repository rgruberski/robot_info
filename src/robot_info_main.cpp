#include <robot_info/robot_info_class.hpp>

int main(int argc, char **argv) {
  ros::init(argc, argv, "robot_info");
  ros::NodeHandle nh;
  RobotInfo rm = RobotInfo(&nh);
  ros::spin();
}
