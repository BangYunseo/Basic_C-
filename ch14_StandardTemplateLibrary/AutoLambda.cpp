#include <iostream>
#include <string>

using namespace std;

int main(){
  auto love = [](string a, string b){ cout << a << "보다 " << b << "가 좋아!" << endl; };

  love("돈", "너");
  love("냉면", "만두");
  // 각각 람다식 호출
}

// 출력 예시
// 돈보다 너가 좋아!
// 냉면보다 만두가 좋아!
