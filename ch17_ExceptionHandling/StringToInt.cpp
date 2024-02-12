#include <iostream>
#include <cstring>

using namespace std;

// 문자열을 정수로 변환하여 리턴
// 정수로 변환하기 어려운 문자열은 char* 타입 예외 발생
int stringToInt(const char x[]){
  int sum = 0;
  int len = strlen(x);

  for(int i = 0; i < len; i++){
    if(x[i] >= '0' && x[i] <= '9')  sum = sum * 10 + x[i] - '0';
    // 일의 자리부터 10씩 자리 수를 늘려가면서 수를 더함
    else  throw x;
    // char* 타입의 예외 발생
  }
  return sum;
}

int main(){
  int n;
  try{
    n = stringToInt("123");
    // 문자열을 정수로 변환
    cout << "\"123\" (은)는 정수 " << n << " (으)로 변환" << endl;

    n = stringToInt("1A3");
    // 문자열을 정수로 변환
    cout << "\"1A3\" (은)는 정수 " << n << " (으)로 변환" << endl;
  }
  catch(const char* s){
    cout << s << " 처리에서 예외 발생" << endl;
    return 0;
  }
}

// 출력 예시
// "123" (은)는 정수 123 (으)로 변환
// 1A3 처리에서 예외 발생
