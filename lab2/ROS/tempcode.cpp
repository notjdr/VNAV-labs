#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "example_node");
  ros::NodeHandle n;

  ros::Rate loop_rate(50);

  while (ros::ok()) {
    // ... do some useful things ...
    ros::spinOnce();
    loop_rate.sleep();
  }
  return 0;
}