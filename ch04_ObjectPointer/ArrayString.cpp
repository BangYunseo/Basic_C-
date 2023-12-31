#include <iostream>
#include <string>

using namespace std;

int main(){
  string names[5];
  // 문자열 배열 선언

  for(int i = 0; i < 5; i++){
    cout << "이름 >> ";
    getline(cin, names[i], '\n');
  }
  // 이름을 getline 연산자를 통해 입력받음

  string let = names[0];
  for(int i = 0; i < 5; i++){
    if(let < names[i]) let = names[i];
    // 만약 사전 순서대로 let 문자열이 names[i] 문자열보다 앞에 온다면 let 문자열 변경
  }

  cout << "가장 뒤에 오는 문자열은 " << let << " 입니다." << endl;
}

// 출력 예시
// 이름 >> Kim Nam Yun
// 이름 >> Chang Jae Young
// 이름 >> Lee Jae Moon
// 이름 >> Han Won Sun
// 이름 >> Hwang Su Hee
// 가장 뒤에 오는 문자열은 Lee Jae Moon 입니다.
