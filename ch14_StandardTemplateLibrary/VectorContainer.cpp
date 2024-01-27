#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v;
  // 정수만 삽입 가능한 벡터 생성

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  // 각각 벡터에 정수 1, 2, 3 삽입

  for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
  cout << endl;
  // v[i]는 벡터의 i + 1 번째 원소이며 벡터의 모든 원소를 출력

  v[0] = 10;
  // 벡터의 첫 번째 원소인 v[0]을 10으로 변경

  int n = v[2];
  // n에 3 저장

  v.at(2) = 5;
  // 벡터의 세 번째 원소(2 + 1)를 5로 변경

  for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
  cout << endl;
  // v[i]는 벡터의 i + 1 번째 원소이며 벡터의 모든 원소를 출력
}

// 출력 예시
// 1 2 3
// 10 2 5
