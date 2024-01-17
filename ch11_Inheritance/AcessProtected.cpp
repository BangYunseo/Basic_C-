#include <iostream>
#include <string>

using namespace std;

// Point 클래스
class Point { 
protected:
  int x, y; / /한 점 (x,y) 좌표값 
public:
  void set(int x, int y){
    this->x = x;
    this->y = y;
  }
  void showPoint() { cout << "(" << x << "," << y << ")" << endl; }
};

// Point를 상속받은 ColorPoint 클래스
class ColorPoint : public Point { 
  string color;
public:
  void setColor(string color){ this->color = color; }
  void showColorPoint(){ 
    cout << color << ":";
    showPoint(); 
    // Point 클래스의 showPoint() 호출 
  }
  bool equals(ColorPoint p){
    if(x == p.x && y == p.y && color == p.color) return true;
    else return false; 
  }
};

int main() {
  Point p; 
  // 기본 클래스의 객체 생성 

  p.set(2,3);
  p.x = 5;          // 오류 발생
  p.y = 5;          // 오류 발생
  p.showPoint();



  ColorPoint cp; 
  // 파생 클래스의 객체 생성

  cp.x = 10;        // 오류 발생
  cp.y = 10;        // 오류 발생
  cp.set(3,4);
  cp.setColor("Red"); 
  cp.showColorPoint();



  ColorPoint cp2;
  cp2.set(3,4);
  cp2.setColor("Red");
  cout << ((cp.equals(cp2))?"true":"false");
}
