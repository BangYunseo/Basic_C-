#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  vector<string> sv;
  // 문자열 벡터 생성

  string name;
  cout << "이름을 5개 입력하세요. " << endl;
  for(int i = 0; i < 5; i++){
    cout << i+1 << " >> ";
    getline(cin, name);
    sv.push_back(name);
  }
  // 한 줄에 한 개씩 총 5개의 이름을 입력받는 for문 

  name = sv.at(0);
  벡터의 첫 원소를 변수 name으로 설정
  
  for(int i = 1; i < sv.size(); i++){
    if(name < sv[i]) name = sv[i];
    // 만약 sv[i]의 문자열이 name보다 사전에서 뒤에 나올 경우 name을 sv[i]의 문자열로 변경
  }
  cout << "사전에서 가장 뒤에 나오는 이름은 " << name << " 입니다. " << endl;
}

// 출력 예시
// 이름을 5개 입력하세요.
// 1 >> 황기태
// 2 >> 이재문
// 3 >> 김남윤
// 4 >> 한원선
// 5 >> 애슐리
// 사전에서 가장 뒤에 나오는 이름은 황기태 입니다.
