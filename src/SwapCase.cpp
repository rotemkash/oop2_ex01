#include "SwapCase.h"

SwapCase::SwapCase() : Function("swapCase") {}

/* This Function receives a string and swaps the lettere's case */
std::string SwapCase::calculate(const std::string &str) {
  std::string ret = str;

  for (int i = 0; i < ret.length(); i++) {
    if (std::isupper(ret[i])) {
      ret[i] = std::tolower(ret[i]);

    } else if (std::islower(ret[i])) {
      ret[i] = std::toupper(ret[i]);
    }
  }

  return ret;
}