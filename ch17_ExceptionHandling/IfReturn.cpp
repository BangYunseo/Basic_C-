#include <iostream>

using namespace std;

int getExp(int base, int exp){ // 매개 변수 중 하나라도 음수라면 -1을 리턴
  if(base <= 0 || exp <= 0){
    return -1;
    // 오류 리턴
  }
  for(int n = 0; n < exp; n++){
    value = value * base;
    return value;
  }
}

int main(){
  int v = 0;
  v = getExp(2, 3);
  if(v != -1)  cout << "2의 3승은 " << v << endl;
  else  cout << "오류. 2의 3승은 계산할 수 없습니다! " << endl;

  int e = 0;
  e = getExp(2, -3);
  // 2의 -3승이므로 getExp()는 false(-1)을 리턴
  if(e != -1)  cout << "2의 -3승은 " << e << endl;
  else  cout << "오류. 2의 -3승은 계산할 수 없습니다! << ;
}

// 출력 예시
// 2의 3승은 8
// 오류. 2의 -3승은 계산할 수 없습니다!
