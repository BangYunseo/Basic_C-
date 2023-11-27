#include <iostream>

using namespace std;

// 아래의 내용을 클래스로 바꾸기
// int abs(int a){ return (a > 0) ? a : -a; }
// int max(int a, int b) { return (a > b) ? a : b; }
// int min(int a, int b) { return (a > b) ? b : a; }
//
// int main(){
//   cout << abs(-5) << endl;
//   cout << max(10, 8) << endl;
//   cout << min(-3, -8) << endl;
// }

class Math{
public:
  static int abs(int a) { return (a > 0) ? a : -a; }
  static int max(int a, int b) { return (a > b) ? a : b;}
  static int min(int a, int b) { return (a > b) ? b : a; }
};
int main(){
  cout << Math::abs(-5) << endl;
  cout << Math::max(10, 8) << endl;
  cout << Math::min(-3, -8) << endl;
}

// 출력 예시
// 5
// 10
// -8
