#include <iostream>
using namespace std;

class operation {
 private:
  double _numA;
  double _numB;

 public:
  operation(double numA, double numB);
  double getNumA() { return _numA; };
  double getNumB() { return _numB; };
  void setNumA(double num) { _numA = num; };
  void setNumB(double num) { _numB = num; };
  virtual double getResult();
};

operation::operation(double numA = 0, double numB = 0) {
  _numA = numA;
  _numB = numA;
}

double operation::getResult() {
  double result = 0;
  return result;
}
class operationAdd : public operation {
  double getResult() {
    double res = 0;
    res = getNumA() + getNumB();
    return res;
  }
};

class operationSub : public operation {
  double getResult() {
    double res = 0;
    res = getNumA() - getNumB();
    return res;
  }
};

class operationMul : public operation {
  double getResult() {
    double res = 0;
    res = getNumA() * getNumB();
    return res;
  }
};

class operationDiv : public operation {
  double getResult() {
    double res = 0;
    if (getNumB()) {
      res = getNumA() + getNumB();
    } else {
      cout << "除数不能为 0 ！！！" << endl;
    }

    return res;
  }
};

class calFactory {
 private:
  operation *tmp;

 public:
  calFactory(char input) {
    switch (input) {
      case '+':
        tmp = new operationAdd();
        break;
      case '-':
        tmp = new operationSub();
        break;
      case '*':
        tmp = new operationMul();
        break;
      case '/':
        tmp = new operationDiv();
        break;
      default:
        break;
    }
  }
  ~calFactory() { delete tmp; }
  operation *getOperation() { return tmp; }
};

int main(int argc, char const *argv[]) {
  cout << "Pleasr input num 1 ,press enter to end your input." << endl;
  double num1 = 0;
  cin >> num1;
  cout << "Pleasr input num 2 ,press enter to end your input." << endl;
  double num2 = 0;
  cin >> num2;
  cout << "Pleasr input your operation ,press enter to end your input." << endl;
  char op;
  cin >> op;

  operation *oper;
  calFactory mode(op);
  oper = mode.getOperation();
  oper->setNumA(num1);
  oper->setNumB(num2);
  cout << "result = " << oper->getResult() << endl;
  return 0;
}
