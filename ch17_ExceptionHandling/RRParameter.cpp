#include <iostream>

using namespace std;

bool getExp(int base, int exp, int &ret){ // base^exp 값을 계산하여 ret에 저장
  if(base <= 0 || exp <= 0) return false;
  int value = 1;
  for(int n = 0; n < exp; n++) value = value * base;
  ret = value;
  return true;
}

int main(){
  int v = 0;
  if(getExp(2, 3, v))  cout << "2의 3승은 " << v << endl;
  // v = 2^3 = 8이므로 getExp()는 true를 리턴
  else cout << "오류. 2의 3승은 계산할 수 없습니다!" << endl; 

  int e = 0;
  if(getExp(2, -3, e))  cout << "2의 -3승은 " << e << endl;
  // e = 2^-3 = 1/8이지만 getExp 함수에 매개 변수인 exp의 값이 -3, 음수이므로 false 리턴
  else cout << "오류. 2의 -3승은 계산할 수 없습니다!" << endl;
}

// 출력 예시
// 2의 3승은 8
// 오류. 2의 -3승은 계산할 수 없습니다!
