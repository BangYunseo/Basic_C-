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
  bool operator!();
  // ! 연산자 함수 선언
};

// ! 연산자 함수 구현
bool Power::operator!(){
  if(kick == 0 && punch == 0) return true;
  else return false;
}

int main(){
  Power a(0, 0), b(5, 5);
  if(!a) cout << "a's power was 0!" << endl;
  else cout << "a's power wasn't 0!" << endl;
  // !a를 통해 !연산자 호출

  if(!b) cout << "b's power was 0!" << endl;
  else cout << "b's power wasn't 0!" << endl;
  // !b를 통해 !연산자 호출
}

// 출력 예시
// a's power was 0!
// b's power wasn't 0!
