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
  Power& operator<<(int n);
  // << 연산자 함수 선언
  // 연산 후 Power 객체의 참조 리턴
};

// 전위 ++ 연산자 함수 구현
Power& Power::operator<<(int n){
  kick += n;
  punch += n;
  return *this;
  // 변경된 객체 자신(객체 a)의 참조 리턴
}

int main(){
  Power a(1, 2);
  a << 3 << 5 << 6;
  a.show();
}

// 출력 예시
// Kick = 15, Punch = 16

// 객체 a에 3, 5, 6이 순서대로 더해짐
