#pragma once

#include "Function.h"

class ID : public Function {

 public:
  ID();
  std::string calculate(const std::string &str) override;
};

