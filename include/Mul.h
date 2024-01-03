#pragma once

#include "Function.h"

class Mul : public Function {
 public:
  Mul(const std::shared_ptr<Function> &func, int n);

  std::string calculate(const std::string &str) override;

  ~Mul() = default;

 private:
  int m_num;
  std::shared_ptr<Function> m_func;
  // Function *m_func1, *m_func2;
};
