#include <iostream>
#include <vector>

using namespace std;

int square(int x){ return x * x; }

int main(){
  // 기본 타입 선언에 auto 활용
  auto c = 'a';          // char 타입
  auto pi = 3.14;        // double 타입
  auto ten = 10;         // int 타입
  auto *p = &ten;        // 변수 p는 int* 타입으로 결정
  cout << c << " " << pi << " " << ten << " " << *p << endl;

  // 함수의 리턴 타입으로 추론
  auto ret = square(3);
  // square() 함수의 리턴 타입이 int이므로 ret는 int 타입
  cout << *p << " " << ret << endl;

  vector<int> v = { 1, 2, 3, 4, 5 };
  // 벡터 v에 5 개의 원소 1, 2, 3, 4, 5 삽입

  vector<int>::iterator it;
  for(it = v.begin(); it != v.end(); it++)  cout << *it << " ";
  // 1 2 3 4 5 출력
  cout << endl;

  // 템플릿에 auto를 사용하여 간소화
  for(auto it = v.begin(); it != v.end(); it++)  cout << *it << " ";
  // 1 2 3 4 5 출력
}

// 출력 예시
// a 3.14 10 10
// 10 9
// 1 2 3 4 5
// 1 2 3 4 5
