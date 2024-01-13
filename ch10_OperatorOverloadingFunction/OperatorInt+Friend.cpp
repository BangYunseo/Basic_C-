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
  friend Power operator+(int op1, Power op2);
  // 프렌드 + 연산자 함수 선언
};

// 프렌드 + 연산자 함수 구현(외부 함수로 구현)
// private 속성인 kick, punch를 접근하도록 하기 위해 연산자 함수를 프렌드로 선언
Power operator+(int op1, Power op2){
  Power tmp;
  // 임시 객체 생성
  
  tmp.kick = op1 + op2.kick;
  // kick에 op2 더하기

  tmp.punch = op1 + op2.punch;
  // punch에 op2 더하기

  return tmp;
  // 더한 결과 리턴
}

int main(){
  Power a(3, 5), b;
  a.show(); b.show();
  
  b = 2 + a;
  // 파워 객체와 정수 더하기
  // operator+(int, Power) 함수 호출
  
  a.show(); b.show();
}

// 출력 예시
// Kick = 3, Punch = 5
// Kick = 0, Punch = 0
// Kick = 3, Punch = 5
// Kick = 5, Punch = 7

// a, b 출력한 후 b = 2 + a 후 a, b 출력
