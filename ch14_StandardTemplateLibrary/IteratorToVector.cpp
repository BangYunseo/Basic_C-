#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v;
  // 정수 벡터 생성

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  vector<int>::iterator it;
  // 벡터 v의 원소에 대한 포인터 it 선언

  // iterator를 이용하여 모든 원소 탐색
  for(it = v.begin(); it != v.end(); it++){
    int n = *it;
    // it가 가리키는 원소값 리턴

    n = n * 2;
    // n * 2의 값을 n에 저장

    *it = n;
    // it가 가리키는 원소에 값 쓰기
    // ex) 만약 1이 삽입된다면, 1 * 2 = 2가 *it의 맨 처음값에 덮여지고 그 값을 1 더한 후(인덱스값을 더함) 다시 덮어씀
  }

  for(it = v.begin(); it != v.end(); it++) cout << *it << ' ';
  cout << endl;
}

// 출력 예시
// 2 4 6
