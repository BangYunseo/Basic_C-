#include <iostream>
#include <string>

using namespace std;

int main(){
  string song("Falling in love with you");
  // 문자열 song을 "Falling in love with you"로 설정
  string elvis("Elvis Presley");
  // 문자열 elvis를 "Elvis Presley"로 설정
  string singer;
  // 문자열 singer 선언
  

  cout << song << "를 부른 가수는";
  cout << "(첫 글자는 " << elvis[0] << ")? ";
  // 배열의 인덱스를 나타내는 연산자 사용

  getline(cin, singer); 
  // 문자열 입력
  // getline : string 타입의 문자열을 입력받기 위해 제공되는 전역 함수

  if(singer == elvis) cout << "정답!" << endl;
  else cout << "오답, " + elvis + "입니다." << endl;
  // +로 문자열 연결
}

// 출력 예시
// Falling in love with you를 부른 가수는(첫 글자는 E)? Elvis Pride
// 오답, Elvis Presley입니다.

// 문자열을 입력할 때, 빈칸도 문자열에 포함
