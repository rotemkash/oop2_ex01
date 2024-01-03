#pragma once


#include "Function.h"

class Comp : public Function {
 public:
  Comp(const std::shared_ptr<Function> &func1,
      const std::shared_ptr<Function> &func2);

  std::string calculate(const std::string &str) override;

  ~Comp() = default;

 private:
  std::shared_ptr<Function> m_func1, m_func2;
  // Function *m_func1, *m_func2;
};
