#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/*
디폴트 매개 변수를 가진 하나의 함수로 합쳐지기 전인 두 개의 중복 함수

25개의 '*' 문자를 한 라인에 출력
void fillLine(){
  for(int i = 0; i < 25; i++)
    cout << '*';
  cout << endl;
}

n개의 c 문자를 한 라인에 출력
void fillLine(int n, char c){
  for(int i = 0; i < n; i++)
    cout << c;
  cout << endl;
}
*/

void fillLine(int n = 25, char c = '*'){
  for(int i = 0; i < n; i++)
    cout << c;
  cout << endl;
}
int main(){
  fillLine();
  fillLine(10, '%');
}

// 출력 예시
// *************************
// %%%%%%%%%%
