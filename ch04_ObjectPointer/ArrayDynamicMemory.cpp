#include <iostream>

using namespace std;

int main(){
  cout << "정수의 개수를 입력하세요 >> "
  int n;
  cin >> n;

  if (n <= 0) {
    cout << "잘못된 정수가 입력되었습니다. " << endl;
    return 0;
  }

  int *p = new int[n];
  // n 개의 정수 배열 동적 할당

  if(!p){  // p == NULL 일 경우
    cout << "메모리 할당 불가" << endl;
    return 0;
  }

  for (int i = 0; i < n; i++) {
    cout << i + 1 << "번째 정수 : ";
    // 프롬프트 출력
    
    cin >> p[i];
    // 키보드로부터 정수 입력
  }

  int sum = 0;
  for (int i = 0; i < n; i++) sum += p[i];
  cout << "평균 : " << sum / n << endl;

  delete [] p;
  // 배열 메모리 반환
}

// 출력 예시
// 정수의 개수를 입력하세요 >> 4
// 1번째 정수 : 4
// 2번째 정수 : 20
// 3번째 정수 : -5
// 4번째 정수 : 9
// 평균 : 7
