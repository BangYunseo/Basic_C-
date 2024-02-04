#include <iostream>
#include <string>

using namespace std;

istream& question(istream& ins){
  cout << "거울아 거울아 누가 가장 예쁘니 ? ";
  return ins;
}

int main(){
  string ans;
  cin >> question >> ans;
  cout << endl;
  cout << "세상에서 가장 예쁜 사람은 " << ans << "입니다." << endl;
}

// 출력 예시
// 거울아 거울아 누가 가장 예쁘니 ? 백설공주
// 세상에서 가장 예쁜 사람은 백설공주입니다.
