#pragma once

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>

#include "Add.h"
#include "Comp.h"
#include "Function.h"
#include "Id.h"
#include "Mul.h"
#include "Reverse.h"
#include "Substr.h"
#include "SwapCase.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Controller {
 public:
  Controller();

  void run();

 private:
  std::vector<std::shared_ptr<Function>> m_funcVector;

  void printMenu() const;

  void printHelp() const;

  void printError() const;

  void evaluate() const;

  void substring();

  void multiply();

  void add();

  void composition();

  void deleteFunc();

  //
  //
  /**
 private:
  std::vector<Function> m_functions;
  //
  //
  void printMenu() const;
  */
};
//
// void Controller::run() {
//  /**
//  std::string command;
//  int func_num;
//  while (true) {
//    // printMenu();
//    //  cin >> command
//    switch (command) {
//      case "eval":
//        cin >> func_num;
//        m_functions[func_num].calculate();
//        break;
//      case "substr":
//        break;
//      case "add":
//          // add 0 1
//        Functoin new_func = Functoin(func_0, func_1);
//        m_functions.push_back(new_func);
//        break;
//    }
//  }
//  */
//}
//
// Controller::Controller() {
//  /**
//  m_functions.push_back(func_0);
//  m_functions.push_back(func_1);
//  m_functions.push_back(func_2);
//  */
//  //
//}
