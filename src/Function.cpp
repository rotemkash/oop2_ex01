#include "Function.h"

/*
* Constructor
*/
Function::Function(const std::string& funcName) : m_funcName(funcName) {}

/*
* returns the function's name
*/
std::string Function::getName() const { return m_funcName; }


/*
* extraction operator for the Function 
*/
std::ostream& operator<<(std::ostream& os, const Function& func) {
  os << func.getName();
  return os;
}
