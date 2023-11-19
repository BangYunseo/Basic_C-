#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int add(int a, int b) { return a + b; }
int add(int a, int &b) { b += a; return b; }

int main(){
  int s = 10, t = 20;
  cout << add(s, t);
  // 컴파일 오류 발생
  // why? add(s, t)가 값으로부터 불러오는 것인지 참조로부터 불러오는 것인지 모호하기 때문
}
