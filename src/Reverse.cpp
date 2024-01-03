#include "Reverse.h"


Reverse::Reverse() : Function("reverse") {}


/*
* returns the reveresed string
*/
std::string Reverse::calculate(const std::string &str) {
  std::string ret = str;
  std::reverse(ret.begin(), ret.end());
  return ret;
}
