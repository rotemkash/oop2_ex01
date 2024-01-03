#pragma once

#include "Function.h"

class Reverse : public Function {
 public:
  Reverse();
  std::string calculate(const std::string &str) override;
};
