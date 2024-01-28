#include <iostream>
#include <vector>
#include <algorithm>
// for_each() 알고리즘 함수를 사용하기 위한 #include

using namespace std;

void print(int n){ cout << n << " "; }

int main(){
  vector<int> v = { 1, 2, 3, 4, 5 };

  // for_each()는 벡터 v의 첫 번째 원소부터 끝까지 검색하면서 각 원소에 대해 print(int n) 호출
  // 매개 변수 n에 각 원소 값 전달
  for_each(v.begin(), v.end(), print);
  // print 함수 호출 : 매개 변수 n에는 벡터의 각 원소 전달
}

// 출력 예시
// 1 2 3 4 5
