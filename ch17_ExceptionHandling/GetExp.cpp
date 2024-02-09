#include <iostream>

using namespace std;

int getExp(int base, int exp){ // base의 exp 지수승을 계산하여 리턴
  int value = 1;
  for(int n = 0; n < exp; n++)  value = value * base;
  // base를 exp번 곱하여 지수 값 계산
  return value;
}

int main(){
  int v = getExp(2, 3);  // 2의 3승 : 8
  cout << "2의 3승은 " << v << endl;

  int e = getExp(2, -3);  // 2의 -3승 : 1/8
  cout << "2의 -3승은 " << e << endl;
}

// 출력 예시
// 2의 3승은 8
// 2의 -3승은 1

// 2의 -3승이 8인데 1로 출력되는 오류 발생
// 음수 입력에 대한 대처가 없는 코드
