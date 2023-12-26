#include <iostream>

using namespace std;

#include "Adder.h"
#include "Sub.h"
#include "Calculator.h"

void Calculator::run(){
  cout << "숫자 2개를 입력하시오. >> ";
  int a, b;
  cin >> a >> b;
  Adder add(a, b);
  Sub sub(a, b);
  cout << add.process() << endl;
  cout << sub.process() << endl;
}
