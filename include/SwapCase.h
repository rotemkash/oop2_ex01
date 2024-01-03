#pragma once

#include "Function.h"

class SwapCase : public Function {
 public:
    SwapCase();
  std::string calculate(const std::string &str) override;
};