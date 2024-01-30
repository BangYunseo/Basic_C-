#include <iostream>

using namespace std;

int main(){
  // "Hi!" 를 출력하고 줄넘김
  cout.put("H");
  cout.put("i");
  cout.put(33);
  // 아스키 코드 33은 문제 '!'를 가리킴
  cout.put("\n");

  // "C++" 출력
  cout.put('C').put('+').put('+').put(' ');
  // put() 메소드는 연결해서 사용 가능

  char str[] = "I love programming!";
  cout.write(str, 6);
  // str 배열의 6개 문자 "I love"를 스트림에 출력
}

// 출력 예시
// Hi!
// C++ I love
