#include <cstdlib>
#include <iomanip>
#include <iostream>

#include "Add.h"
#include "Controller.h"
#include "ID.h"
#include "Reverse.h"
#include "SwapCase.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
  Controller controller;
  controller.run();

  return EXIT_SUCCESS;
}
