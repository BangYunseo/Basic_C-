#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  vector<int> v;
  // 정수 벡터 생성

  cout << "5 개의 정수를 입력하세요 >> ";
  for(int i = 0; i < 5; i++){
    int n;
    cin >> n;
    v.push_back(n);
    // 키보드에서 읽은 정수를 벡터에 삽입
  }

  // v.begin()에서 v.end() 사이의 값을 오름차순으로 정렬
  // sort() 함수의 실행 결과 벡터 v의 원소 순서 변경
  sort(v.begin(), v.end());

  vector<int>::iterator it;
  // 벡터 내의 원소를 탐색하는 iterator 변수 선언

  for(it = v.begin(); it != v.end(); it++) cout << *it << ' ';
  cout << endl;
}

// 출력 예시
// 5 개의 정수를 입력하세요 >> 30 -7 250 6 120
// -7 6 30 120 250
