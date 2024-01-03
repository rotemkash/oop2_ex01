#include "ID.h"

ID::ID() : Function("id") {}

/*
 * returns the same string
 */
std::string ID::calculate(const std::string &str) {
  std::string ret = str;
  return ret;
}
