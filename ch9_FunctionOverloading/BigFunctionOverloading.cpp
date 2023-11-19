#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

// a와 b 중에서 큰 수 반환
int big(int a, int b){
  if(a > b)
    return a;
  else
    return b;
}

// 배열 a[]에서 가장 큰 수 반환
int big(int a[], int size){
  int res = a[0];
  for(int i = 0; i < size; i++){
    if(res < a[i])
      res = a[i];
  }
  return res;
}

int main(){
  int array[5] = {1, 9, -2, 8, 6};
  cout << big(2, 3) << endl;
  cout << big(array, 5) << endl;
}

// 출력 예시
// 3
// 9
