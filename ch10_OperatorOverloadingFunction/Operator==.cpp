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
  bool operator==(Power op2);
  // ==연산자 함수 선언
};

// ==연산자 함수 구현
bool Power::operator==(Power op2){
  if(kick == op2.kick && punch == op2.punch) return true;
  else return false;
}

int main(){
  Power a(3, 5), b(3, 5);
  // 두 개의 동일한 파워 객체 생성
  
  a.show(); b.show();
  if(a == b) cout << "Same Power!" << endl;
  else cout << "Different Power!" << endl;
}

// 출력 예시
// Kick = 3, Punch = 5
// Kick = 3, Punch = 5
// Same Power!
