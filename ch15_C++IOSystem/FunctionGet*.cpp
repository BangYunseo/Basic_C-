#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char cmd[80];
  cout << "문자열 읽기" << endl;
  while(true){
    cout << "종료하려면 exit를 입력하시오 >> ";
    cin.get(cmd, 80);
    // 79개까지의 영어 문자 읽기
    // '\n'은 입력 스트림 버퍼에 남김
    // 38개까지의 한글 문자 읽기 가능

    if(strcmp(cmd, "exit") == 0){
      // cmd가 "exit"의 문자열을 가질 경우
      cout << "프로그램 종료";
      return 0;
    }
    else cin.ignore(1);
    // 버퍼에 남아 있는 <Enter> 키('\n') 제거
  }
}

// 출력 예시
// 종료하려면 exit를 입력하시오 >> ExiT
// 종료하려면 exit를 입력하시오 >> exito
// 종료하려면 exit를 입력하시오 >> exit
// 프로그램 종료
