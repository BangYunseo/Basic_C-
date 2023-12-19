#include <iostream> 

using namespace std;

int main() {
  cout << "주소 입력 >> "; 
  char address[100]; 
  cin.getline(address, 100, '\n'); 
// 키보드로부터 주소 읽기 
  cout << "주소는 " << address << endl;
}

// 출력 예시
// 주소 입력 >> 컴퓨터시 프로그램구 C++동 스트링 1-1 
// 주소는 컴퓨터시 프로그램구 C++동 스트링 1-1
