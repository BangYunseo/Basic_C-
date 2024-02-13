#include <iostream>
#include "MyStack.h"

using namespace std;

int main(){
  MyStack intStack;
  try{
    intStack.push(100);                // push 100
    intStack.push(200);                // push 200
    cout << intStack.pop() << endl;    // pop 200
    cout << intStack.pop() << endl;    // pop 100
    cout << intStack.pop() << endl;    // "Stack Empty" 예외 발생
    // "Stack Empty" 예외 발생
  }
  catch(const char* s){
    cout << "예외 발생 : " << s << endl;
  }
}

// 출력 예시
// 200
// 100
// 예외 발생 : Stack Empty

// 3번째 pop()에서 예외 발생
