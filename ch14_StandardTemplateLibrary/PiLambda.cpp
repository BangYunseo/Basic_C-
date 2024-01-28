#include <iostream>

using namespace std;

int main(){
  double pi = 3.14;
  // 지역 변수

  auto calc = [pi](int r) -> double{ return pi * r * r; };
  // 람다식

  cout << "면적은 " << calc(3);
  // 람다식을 호출하면서 3 삽입
}

// 출력 예시
// 면적은 28.26
