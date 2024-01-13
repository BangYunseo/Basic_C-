#include <iostream>

using namespace std;

class Power{
  int kick;
  int punch;
public:
  Power(int kick = 0, int punch = 0){
    this->kick = kick; this->punch = punch;
  }
  void show(){
    cout << "Kick = " << kick << ',' << " Punch = " << punch << endl;
  }
  Power& operator++();
  // 전위 ++ 연산자 함수 선언
};

// 전위 ++ 연산자 함수 구현
Power& Power::operator++(){
  kick++;
  punch++;
  return *this;
  // 변경된 객체 자신(객체 a)의 참조 리턴
}

int main(){
  Power a(3, 5), b;
  a.show(); b.show();
  
  b = ++a;
  // 전위 ++ 연산자 사용
  // operator++() 함수 호출
  
  a.show(); b.show();
}

// 출력 예시
// Kick = 3, Punch = 5
// Kick = 0, Punch = 0
// Kick = 4, Punch = 6
// Kick = 4, Punch = 6

// a, b 출력한 후 b = ++a 후 a, b 출력
