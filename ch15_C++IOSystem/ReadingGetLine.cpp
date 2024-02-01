#include <iostream>

using namespace std;

int main(){
  char line[80];
  cout << "cin.getline() 함수 사용" << endl;
  cout << "exit를 입력하면 루프 중지" << endl;

  int no = 1;
  // 라인 번호

  while(true){
    cout << "라인" << no << " >> ";
    cin.getline(line, 80);
    // 79개까지의 문자 읽음
    // '\n'은 line에 삽입하지 않고 스트림 버퍼에서 제거

    if(strmcp(line, "exit") == 0) break;
    // exit가 입력된 경우 루프문 탈출

    cout << "Echo : ";
    cout << line << endl;
    // 읽은 라인을 화면에 출력

    no++;
    // 라인 번호 증가
  }
}

// 출력 예시
// cin.getline() 함수 사용
// exit를 입력하면 루프 중지
// 라인 1 >> I want to be a gratest developer.
// Echo 1 : I want to be a gratest developer.
// 라인 2 >> 저는 위대한 개발자가 되고 싶습니다.
// Echo 2 :저는 위대한 개발자가 되고 싶습니다.
// 라인 3 >> exit
