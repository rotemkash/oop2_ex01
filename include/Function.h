#pragma once

#include <string>
#include <iostream>
#include <memory>

class Function {

 public:
  Function(const std::string& funcName);

  virtual std::string calculate(const std::string &str) = 0;

  virtual ~Function() = default;

  std::string getName() const;

 private:
  std::string m_funcName;

};

std::ostream& operator<<(std::ostream& os, const Function& func);