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
  friend Power operator+(Power op1, Power op2);
  // 프렌드 + 연산자 함수 선언
};

// 프렌드 + 연산자 함수 구현(외부 함수로 구현)
Power operator+(Power op1, Power op2){
  Power tmp;
  // 임시 객체 생성
  
  tmp.kick = op1.kick + op2.kick;
  // kick에 op2 더하기

  tmp.punch = op1.kick + op2.punch;
  // punch에 op2 더하기

  return tmp;
  // 더한 결과 리턴
}

int main(){
  Power a(3, 5), b(4, 6), c;

  c = a + b;
  // 파워 객체 + 연산
  // operator+(Power, Power) 함수 호출
  
  a.show(); b.show(); c.show();
}

// 출력 예시
// Kick = 3, Punch = 5
// Kick = 4, Punch = 6
// Kick = 7, Punch = 11

// a, b, c 순으로 출력
