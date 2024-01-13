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
  Power operator+(Power op2);
  // + 연산자 함수 선언
};

// + 연산자 함수 구현
Power Power::operator+(Power op2){
  Power tmp;
  tmp.kick = this->kick + op2.kick;
  // kick 더하기

  tmp.punch = this->punch + op2.punch;
  // punch 더하기

  return tmp;
  // 더한 결과 리턴
}

int main(){
  Power a(3, 5), b(4, 6), c;
  c = a + b;
  // 객체 a의 operator+() 멤버 함수 호출
  
  a.show(); b.show(); c.show();
}

// 출력 예시
// Kick = 3, Punch = 5
// Kick = 4, Punch = 6
// Kick = 7, Punch = 11

// 객체 a, b, c 순으로 출력
