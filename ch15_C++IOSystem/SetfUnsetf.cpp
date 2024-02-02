#include <iostream>

using namespace std;

int main(){
  cout << 30 << endl;
  // 10진수 출력

  cout.unsetf(ios::dec);
  // 10진수 해제
  cout.setf(ios::hex);
  // 16진수 설정
  cout<< 30 << endl;
  // 1e 출력

  cout.setf(ios::showbase);
  // 0x를 붙힌 16진수 설정
  cout << 30 << endl;
  // 0x1e 출력

  cout.setf(ios::uppercase);
  // 16진수의 A ~ F를 대문자로 출력
  cout << 30 << endl;
  // 0x1E 출력

  cout.setf(ios::dec | ios::showpoint);
  // 10진수 표현 설정 및 소숫점 이하 나머지를 0ㅇ로 출력
  cout << 23.5 << endl;
  // 23.5000 출력

  cout.setf(ios::scientific);
  // 실수를 과학 산술용 표현으로 출력
  cout << 23.5 << endl;
  // 2.350000E+01 출력

  cout.setf(ios::showpos);
  // 양수인 경우 + 부호도 함께 출력
  cout << 23.5;
  // +2.350000E+01 출력
}

// 출력 예시
// 30
// 1e
// 0x1e
// 0x1E
// 23.5000
// 2.350000E+01
// +2.350000E+01
