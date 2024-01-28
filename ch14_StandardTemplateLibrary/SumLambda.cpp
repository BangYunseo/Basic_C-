#include <iostream>

using namespace std;

int main(){
  int sum = 0;
  // 지역 변수

  [&sum](int x, int y){ sum = x + y; }(2, 3);
  // 지역변수 sum에 대한 참조
  // 합 5를 지역변수 sum에 저장

  cout << "합은 " << sum;
}

// 출력 예시
// 합은 5
