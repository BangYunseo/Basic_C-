#include <iostream>

using namespace std;

// 템플릿 print() 함수
template <class T>
void print(T array[], int n){
  for(int i = 0; i < n; i++)  cout << array[i] << '\t';
  cout << endl;
}

// char 배열을 출력하기 위한 함수 중복
// 템플릿 함수와 중복된 print() 함수
void print(char array[], int n){
  for(int i = 0; i < n; i++)  cout << (int)array[i] << '\t';
  // array[i]를 강제 int타입으로 형변환시킴으로써 정수 출력
  cout << endl;
}

int main(){
  int x[] = {1, 2, 3, 4, 5};
  double d[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  print(x, 5);
  print(d, 5);
  // 템플릿 print() 함수로부터 구체화

  char c[5] = {1, 2, 3, 4, 5};
  print(c, 5);
  // 중복된 print() 함수가 우선 바인딩
}

// 출력 예시
// 1    2    3    4    5
// 1.1  2.2  3.3  4.4  5.5
// 1    2    3    4    5
