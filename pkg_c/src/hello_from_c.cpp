#include <pkg_c/hello_from_c.h>
#include <hidden_hello.h>

using namespace pkg_c;

void pkg_c::hello() {
  ROS_INFO("HELLO FROM PKG C!");
}

void pkg_c::composed_hello() {
  ROS_INFO("COMPOSED HELLO FROM PKG C! composed_hello(): %s", hidden_hello().c_str());
}

std::string pkg_c::hidden_hello() {
  return "From hidden_hello :D";
}
