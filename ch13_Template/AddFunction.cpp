#include <iostream>

using namespace std;

// 배열 data에서 n개의 원소를 합한 결과 리턴 함수
template <class T>
T add(T data[], int n){
  T sum = 0;
  for(int i = 0; i < n; i++)  sum += data[i];
  return sum;
  // sum 타입과 return 타입 모두 T로 선언
}

int main(){
  int x[] = {1, 2, 3, 4, 5};
  double d[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7};

  cout << "sum of x[] = " << add(x, 5) << endl;
  // 배열 x와 원소 5개의 합 계산

  cout << "sum of d[] = " << add(d, 6) << endl;
  // 배열 x와 원소 6개의 합 계산
}

// 출력 예시
// sum of x[] = 15
// sum of d[] = 23.7
