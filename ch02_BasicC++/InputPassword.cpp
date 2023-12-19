#include <iostream> 
#include <cstring> 
// cstring은 strcmp() 함수를 이용하기 위한 헤더 파일

using namespace std;

int main() {
  char password[11];
  cout << "암호를 입력하시오." << endl; 
  while(true) {
    cout << "암호 >> "; 
    cin >> password;
    if(strcmp(password, "C++") == 0) {
      cout << "암호가 일치합니다. 프로그램을 종료합니다." << endl; 
      break;
    } 
    else cout << "암호가 일치하지 않습니다. 다시 입력하시오." << endl; 
  }
}

// 출력 예시
// 암호를 입력하시오.
// 암호 >> Java 
// 암호가 일치하지 않습니다. 다시 입력하시오.
// 암호 >> C
// 암호가 일치하지 않습니다. 다시 입력하시오. 
// 암호 >> C++
// 암호가 일치합니다. 프로그램을 종료합니다.
