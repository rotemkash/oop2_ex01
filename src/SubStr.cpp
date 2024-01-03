#include "SubStr.h"

SubStr::SubStr(const int start, const int len)
    : Function("substr_" + to_string(start) + "_" + to_string(len)),
      m_start(start),
      m_len(len) {}

/*
 * returns a substring of the received string.
 */
std::string SubStr::calculate(const std::string& str) {
  return str.substr(m_start, m_len);
}
