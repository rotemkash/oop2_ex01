#include "Controller.h"

/*Constructor*/
Controller::Controller() {
  m_funcVector.push_back(std::make_shared<ID>());
  m_funcVector.push_back(std::make_shared<SwapCase>());
  m_funcVector.push_back(std::make_shared<Reverse>());
}

void Controller::run() {
  string command;

  do {
    printMenu();

    cin >> command;

    if (command == "eval") {
      evaluate();

    } else if (command == "substr") {
      substring();

    } else if (command == "mul") {
      multiply();

    } else if (command == "add") {
      add();

    } else if (command == "comp") {
      composition();

    } else if (command == "del") {
      deleteFunc();

    } else if (command == "help") {
      printHelp();

    } else if (command == "exit") {
      cout << "Goodbye!" << endl;
      break;

    } else {
      break;
      printError();
      continue;
    }

  } while (true);
}

/*pritns the functions menu*/
void Controller::printMenu() const {
  cout << "List of available string operations:\n";
  for (int i = 0; i < m_funcVector.size(); i++) {
    cout << i << ":    " << *(m_funcVector[i]) << endl;
  }
  cout << "Enter command ('help' for the list of available commands):";
}

/* prints the help page*/
void Controller::printHelp() const {
  cout << "\nThe available commands are:\n";

  cout << "* eval(uate) num x - compute the result of function #num on the "
          "following x string\n";

  cout << "* substr(ing) num1 num2 - creates a substring starting from index "
          "num1 with the length of num2 characters\n";

  cout << "* add(on) num1 num2 - Creates an operation that is the "
          "concatenation of operation #num1 and operation #num2\n";

  cout << "* mul(tiply) n num - Creates an operation that is the multiply n of "
          "operation #num\n";

  cout << "* comp(osite) num1 num2 - creates an operation that is the "
          "composition of operation #num1 and operation #num2\n";

  cout << "* del(ete) num - delete operation #num from the operation list\n";

  cout << "* help - print this command list\n";

  cout << "* exit - exit the program\n" << endl;
}

/* prints error message incase of invalid input*/
void Controller::printError() const {
  cout << "\nInvalid input!\n" << endl;
  cin.clear();
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

/*activates a function with the numbers and values ebtered by the user*/
void Controller::evaluate() const {
  int funcNum;
  string str;
  cin >> funcNum;
  cin >> str;

  if (funcNum < 0 || funcNum >= m_funcVector.size()) {
    printError();
  } else {
    cout << *(m_funcVector[funcNum]) << "(" << str << ") = ";
    cout << m_funcVector[funcNum]->calculate(str) << "\n" << endl;
  }
}

/* asks the user for values and creates a substring function*/
void Controller::substring() {
  int start, len;
  cin >> start >> len;

  if (start < 0) {
    std::cout << "invalid arguments for substr function" << std::endl;
  } else {
    m_funcVector.push_back(std::make_shared<SubStr>(start, len));
  }
}

/*creates a mul function with the matching function and number*/
void Controller::multiply() {
  int n, func_num;
  cin >> n >> func_num;

  if (func_num < 0 || func_num >= m_funcVector.size() || n < 0) {
    printError();
  } else {
    m_funcVector.push_back(std::make_shared<Mul>(m_funcVector[func_num], n));
  }
}

/* creaes an addition function with the matching functions entered by user*/
void Controller::add() {
  int func1, func2;
  cin >> func1 >> func2;

  if (func1 < 0 || func1 >= m_funcVector.size() || func2 < 0 ||
      func2 >= m_funcVector.size()) {
    printError();
  } else {
    m_funcVector.push_back(
        std::make_shared<Add>(m_funcVector[func1], m_funcVector[func2]));
  }
}

/*creates a composition of two function*/
void Controller::composition() {
  int func1, func2;
  cin >> func1 >> func2;
  if (func1 < 0 || func1 >= m_funcVector.size() || func2 < 0 ||
      func2 >= m_funcVector.size()) {
    printError();
  } else {
    m_funcVector.push_back(
        std::make_shared<Comp>(m_funcVector[func1], m_funcVector[func2]));
  }
}

/*asks the user for a number and deletes the funciton with that number*/
void Controller::deleteFunc() {
  int func_num;
  cin >> func_num;

  if (func_num < 0 || func_num >= m_funcVector.size()) {
    printError();
  } else {
    m_funcVector.erase(m_funcVector.begin() + func_num);
  }
}
