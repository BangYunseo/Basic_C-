#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

float square(float a) { return a * a; }
double square(double a) { return a * a; }

int main(){
  cout << square(3.0);
  // square(double a); 호출

  cout << square(3);
  // 컴파일 오류 발생
  // why? square(3)은 인수의 형식이 int이기 때문
}
