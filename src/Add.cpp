#include "Add.h"

Add::Add(const std::shared_ptr<Function> &func1,
         const std::shared_ptr<Function> &func2)
    : Function(func1->getName() + "+" + func2->getName()),
      m_func1(func1),
      m_func2(func2) {}


/*
* sends the string to two functions and add the two results together.
*/
std::string Add::calculate(const std::string &str) {
  return m_func1->calculate(str) + m_func2->calculate(str);
}