#include <iostream>

using namespace std;

int main(){
  // 람다 함수 선언과 동시에 호출(x = 2, y = 3 전달
  // x와 y의 합을 출력하는 람다식의 기본 형태
  // [](int x, int y){ cout << x + y; };
  
  [](int x, int y){ cout << "합은 " << x + y; }(2, 3);
  // 5 출력
}

// 출력 예시 
// 합은 5
