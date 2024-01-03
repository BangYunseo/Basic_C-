#include <iostream>

using namespace std;

// 참조 매개 변수 avg에 평균 값 전달
bool average(int a[], int size, int& avg){
  if(size <= 0)    
    return false;
  int sum = 0;
  for(int i = 0; i < size; i++)    
    sum += a[i];
  avg = sum / size;
  return true;
}

int main(){
  int x[] = {0, 1, 2, 3, 4, 5};
  int avg;
  if(average(x, 6, avg))
    cout << "평균은 " << avg << endl;
    // 참조 매개 변수인 avg에 평균 값이 전달된 것을 확인할 수 있음
  else
    cout << "매개 변수 오류" << endl;
  // avg에 평균이 넘어오고 average()는 true 리턴

  
  if(average(x, -2, avg))
    cout << "평균은 " << avg << endl;
  else
    cout << "매개 변수 오류" << endl;
  // avg의 값은 의미가 없어지며 average()는 false 리턴
}

// 출력 예시
// 평균은 2
// 매개 변수 오류
