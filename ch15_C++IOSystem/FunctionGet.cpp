#include <iostream>

using namespace std;

void get1(){
  cout << "cin.get()로 <Enter> 키까지 입력받고 출력 : ";
  int ch;
  // EOF와의 비교를 위해 int 타입 선언

  while((ch = cin.get()) != EOF){ // 문자 읽기 : EOF일 경우 -1 출력
    cout.put(ch);
    // 읽은 문자 출력

    if(ch == '\n') break;
    // <Enter> 키가 입력되면 읽기 중단
  }
}

void get2(){
  cout << "cin.get(char&)로 <Enter> 키까지 입력받고 출력 : ";
  char ch;
  // EOF와의 비교를 위해 int 타입 선언

  while(true){
    cin.get(ch);
    // 문자 읽기
    
    if(cin.eof()) break;
    // EOF를 만나면 읽기 종료
    
    cout.put(ch);
    // ch의 문자 출력
    
    if(ch == '\n') break;
    // <Enter> 키가 입력되면 읽기 중단
  }
}

int main(){
  get1();
  // cin.get()을 이용하는 사례

  get2();
  // cin.get(char&)을 이용하는 사례
}

// 출력 예제
// cin.get()로 <Enter> 키까지 입력받고 출력 : Do you love C++?
// Do you love C++?
// cin.get(char&)로 <Enter> 키까지 입력받고 출력 : Yes, I do. 
// Yes, I do.
