#include <iostream>

using namespace std;

class Rect;
// Rect 클래스가 선언되기 전에 먼저 참조되는 컴파일 오류(forward reference)를 막기 위한 선언문(forward declaration)

// RectManager 클래스 선언
class RectManager{
public:
  bool equals(Rect r, Rect s);
  void copy(Rect& dest, Rect& srt);
};

// Rect 클래스 선언
class Rect{
  int width, height;
public:
  Rect(int width, int height){
    this->width = width;
    this->height = height;
  }
  friend RectManager;
  // RectManager 클래스를 프렌드 함수로 선언
};

bool RectManager::equals(Rect r, Rect s){  // r과 s가 같으면 true 리턴
  if(r.width == s.width && r.height == s.height)  return true;
  // RectManager 클래스의 equals() 멤버를 프렌드로 선언
    
  else return false;
}

void RectManager::copy(Rect& dest, Rect& src){  // src를 dest에 복사
  dest.width = src.width;
  dest.height = src.height;
}
int main(){
  Rect a(3, 4), b(3, 4);
  RectManager man;

  man.copy(b, a);
  // a를 b에 복사
  // 따라서 객체 b의 width와 height 변수의 값이 a와 같아짐
  if(man.equals(a, b))  cout << "Equals!" << endl;
  else  cout << "Not Equals!" << endl;
}

// 출력 예시
// Equals!
