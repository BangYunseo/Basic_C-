#include <iostream>
#include <string>
// string 클래스 사용을 위한 헤더

using namespace std;

int main(){
  string str;
  // 빈 문자열을 가진 스트링 객체 생성
  string address("서울특별시 성북구 삼선동 389");
  string copyAddress(address);
  // address의 문자열을 복사한 스트링 객체 생성

  char text [] = {'L', 'O', 'V', 'E', '', 'C', '+', '+', '\0'};
  // C-스트링

  string title(text);
  // "Love C++" 문자열을 가진 스트링 객체 생성

  // 스트링 출력
  cout << str << endl;
  // 빈 스트링이므로 아무 값도 출력되지 않음
  cout << address << endl;
  cout << copyAddress << endl;
  cout << title << endl;
}

// 출력 예시
// 
// 서울특별시 성북구 삼선동 389
// 서울특별시 성북구 삼선동 389
// LOVE C++
