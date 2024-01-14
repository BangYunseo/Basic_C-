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
  friend Power& operator++(Power& op);
  // 프렌드 전위 ++ 연산자 함수 선언

  friend Power operator++(Power& op, int x);
  // 프렌드 후위 ++ 연산자 함수 선언
};

// 프렌드 전위 ++ 연산자 함수 구현(외부 함수로 구현)
Power& operator++(Power& op){
  op.kick++;
  op.punch++;
  return op;
  // 연산 결과가 적용된 op 리턴
}

// 프렌드 후위 ++ 연산자 함수 구현(외부 함수로 구현)
Power operator++(Power& op, int x){
  Power tmp = op;
  // 변경하기 전의 op 상태 저장
  
  op.kick++;
  op.punch++;
  return tmp;
  // 변경 이전의 op 리턴
}

int main(){
  Power a(3, 5), b;
  b = ++a;
  // 전위 ++ 연산자
  
  a.show(); b.show();

  b = a++;
  // 후위 ++ 연산자
  
  a.show(); b.show();
}

// 출력 예시
// Kick = 4, Punch = 6
// Kick = 4, Punch = 6
// Kick = 5, Punch = 7
// Kick = 4, Punch = 6

// b = ++a 실행 후 a, b 출력
// b = a++ 실행 후 a, b 출력
