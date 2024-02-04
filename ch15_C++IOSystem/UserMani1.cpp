#include <iostream>

using namespace std;

ostream& fivestar(ostream& outs){
  return outs << "*****";
}

ostream& rightarrow(ostream& outs){
  return outs << "---->";
}

ostream& beep(ostream& outs){
  return outs << '\a';
  // 시스템 beep(삑 소리) 발생
}

int main(){
  cout << "Ringing Bell!" << beep << endl;
  cout << "C" << rightarrow << "C++" << rightarrow << "Java" << endl;
  cout << "Visual" << fivestar << "C++" << endl;
}

// 출력 예시
// Ringing Bell!
// C---->C++---->Java
// Visual*****C++

// Ringing Bell! 이 print된 후에 beep 소리 발생
