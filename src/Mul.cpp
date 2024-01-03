#include "Mul.h"

Mul::Mul(const std::shared_ptr<Function>& func, int n)
    : Function(func->getName() + "*" + std::to_string(n)),
      m_func(func),
      m_num(n) {}

/*
 * activates a function n times on a string and concatinates all of them
 * together.
 */
std::string Mul::calculate(const std::string& str) {
  std::string ret_str = "";
  for (int i = 0; i < m_num; i++) {
    ret_str += str;
  }
  return m_func->calculate(ret_str);
}
