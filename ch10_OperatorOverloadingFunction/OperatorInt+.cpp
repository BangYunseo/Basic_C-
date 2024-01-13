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
  Power operator+(int op2);
  // 정수 + 연산자 함수 선언
};

// 정수 + 연산자 함수 구현
Power Power::operator+(int op2){
  Power tmp;
  // 임시 객체 생성
  
  tmp.kick = kick + op2;
  // kick에 op2 더하기

  tmp.punch = punch + op2;
  // punch에 op2 더하기

  return tmp;
  // 더한 결과 리턴
}

int main(){
  Power a(3, 5), b;
  a.show(); b.show();
  
  b = a + 2;
  // 파워 객체와 정수 더하기
  // operator+(int) 함수 호출
  
  a.show(); b.show();
}

// 출력 예시
// Kick = 3, Punch = 5
// Kick = 0, Punch = 0
// Kick = 3, Punch = 5
// Kick = 5, Punch = 7

// a, b 출력한 후 b = a + 2 후 a, b 출력
