#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

// a에서 b까지의 합 반환
int sum(int a, int b){
  int tmp = 0;
  for(int i = a; i <= b; i++)
    tmp += i;
  return tmp;
}

// 0에서 a까지의 합 반환
int sum(int a){
  int tmp = 0;
  for(int i = 0; i <= a; i++)
    tmp += i;
  return tmp;
}

int main(){
  cout << sum(3, 5) << endl;
  cout << sum(3) << endl;
  cout << sum(100) << endl;
}

// 출력 예시
// 12
// 6
// 5050
