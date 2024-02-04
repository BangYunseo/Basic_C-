#include <iostream>
#include <iomanip>
// 매개 변수 있는 조작자 사용을 위한 #include

using namespace std;

int main(){
  cout << showbase;

  // 타이틀 출력
  cout << setw(8) << "Number";
  cout << setw(10) << "Octal";
  cout << setw(10) << "Hexa" << endl;

  // 하나의 수를 10진수, 8진수, 16진수 형태로 출력
  for(int i = 0; i < 50; i += 5){
    cout << setw(8) << setfill('.') << dec << i;                   // 10진수
    cout << setw(10) << setfill(' ') << oct << i;                  // 8진수
    cout << setw(10) << setfill(' ') << hex << i << endl;          // 16진수
  }
}

// 출력 예시
//   Number     Octal      Hexa
// .......0         0         0
// .......5        05       0x5
// ......10       012       0xa
// ......15       017       0xf
// ......20       024      0x14
// ......25       031      0x19
// ......30       036      0x1e
// ......35       043      0x23
// ......40       050      0x28
// ......45       055      0x2d

// setw(n)에 따라 너비가 달라짐
// setfill(' ')에 따라 빈 공간에 위치한 문자가 달라짐
// 각 값들은 showbase
