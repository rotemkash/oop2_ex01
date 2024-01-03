#pragma once

#include "Function.h"

class Add : public Function {
 public:
  Add(const std::shared_ptr<Function> &func1,
      const std::shared_ptr<Function> &func2);

  std::string calculate(const std::string &str) override;

  ~Add() = default;

 private:
  std::shared_ptr<Function> m_func1, m_func2;
  // Function *m_func1, *m_func2;
};
