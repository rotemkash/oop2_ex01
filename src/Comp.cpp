#include "Comp.h"

Comp::Comp(const std::shared_ptr<Function>& func1,
           const std::shared_ptr<Function>& func2)
    : Function("(" + func1->getName() + ")" + " -> " + "(" + func2->getName() +
               ")"),
      m_func1(func1),
      m_func2(func2) {}

/*
 * returns the string when activated on a composistion of two functions.
 */
std::string Comp::calculate(const std::string& str) {
  return m_func2->calculate(m_func1->calculate(str));
}
