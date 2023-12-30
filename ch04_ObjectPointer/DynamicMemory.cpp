#include <iostream>

using namespace std;

int main(){
  int *p;

  p = new int;
  // int 타입 1개 할당

  if(!p){  // p == NULL
    cout << "메모리 할당 불가" << endl;
    return 0;
  }

  *p = 5;
  // 할당받은 정수 공간에 5 삽입
  int n = *p;

  cout << "*p = " << *p << endl;
  cout << "n = " << n << endl;
}

// 출력 예시
// *p = 5
// n = 5
