#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

// 디폴트 매개 변수를 가진 함수들의 원형 선언
void star(int a = 5);
void msg(int id, string text = "");

// 함수 구현
void star(int a){
  for(int i = 0; i < a; i++)
    cout << "*";
  cout << endl;
}

void msg(int id, string text){
  cout << id << ' ' << text << endl;
}

/*
함수들의 원형 선언 없이 압축한 코드
void star(int a = 5){
  for(int i = 0; i < a; i++)
    cout << "*";
  cout << endl;
}
void msg(int id, string text = ""){
  cout << id << ' ' << text << endl;
}
*/

int main(){
  // star() 호출
  star();
  
  // star(); == star(5);
  star(10);

  // msg() 호출
  msg();
  
  // msg(); == msg(10, "");
  msg(10, "Hello!");
}

// 출력 예시
// *****
// **********
// 10
// 10 Hello!
