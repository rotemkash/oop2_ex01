#pragma once

#include "Function.h"

using std::to_string;

class SubStr : public Function {
 public:
  SubStr(const int start, const int len);
  std::string calculate(const std::string &str) override;

 private:
  int m_start = 0, m_len = 0;
};
