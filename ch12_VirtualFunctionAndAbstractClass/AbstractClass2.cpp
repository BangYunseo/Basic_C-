#include <iostream> 

using namespace std;

// Calculator 클래스
class Calculator { 
  void input() {
    cout << "정수 2개를 입력하세요 >> "; 
    cin >> a >> b;
  } 
protected:
  int a, b;
  virtual int calc(int a, int b) = 0; 
  // 두 정수의 합 리턴
public:
  void run() { 
    input();
    cout << "계산된 값은 " << calc(a, b) << endl; 
  }
};

// Calculator 클래스를 상속받은 Adder 클래스
class Adder : public Calculator { 
protected:
  int calc(int a, int b){ return a + b; } 
  // 순수 가상 함수 구현
};

// Calculator 클래스를 상속받은 Subtractor 클래스
class Subtractor : public Calculator { 
protected:
  int calc(int a, int b) { return a - b; } 
  // 순수 가상 함수 구현
};

int main() {
  Adder adder; 
  Subtractor subtractor; 
  adder.run();
  subtractor.run(); 
}

// 출력 예시
// 정수 2개를 입력하세요 >> 5 3
// 계산된 값은 8
// 정수 2개를 입력하세요 >> 5 3
// 계산된 값은 2
