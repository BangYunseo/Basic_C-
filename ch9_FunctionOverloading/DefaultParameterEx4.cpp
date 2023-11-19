#define _CRT_SECURE_NO_WARNINGS
#include <iosream>
#include <string>

using namespace std;

void msg(int id) { cout << id << endl; }
void msg(int id, string s = "") { cout << id << ":" << s << endl; }

int main(){
  msg(5, "Good Morning!");
  // 정상적으로 컴파일
  // 두 번째 msg()가 호출

  msg(6);
  // 컴파일 오류 발생 
  // why? 함수 호출이 모호하기 때문
  // 맨 위의 함수를 이용하는 것인지 그 아래 함수를 이용하는 것인지 파악할 수 없음
}
