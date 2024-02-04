#include <iostream>

using namespace std;

int main(){
  cout << hex << showbase << 30 << endl;
  cout << dec << showpos << 100 << endl;
  cout << true << ' ' << false << endl;
  cout << boolalpha << true << ' ' << false << endl;
}

// 출력 예시
// 0x1e
// +100
// +1 +0
// true false
