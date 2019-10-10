#include <ros/ros.h>

#include <pkg_c/hello_from_c.h>
// #include <hidden_hello.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "node_c");

  pkg_c::hello();
  pkg_c::composed_hello();
  // ROS_INFO("pkg_c::hidden_hello(): %s", pkg_c::hidden_hello().c_str());

  return 0;
}
