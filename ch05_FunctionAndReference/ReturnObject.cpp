#include <iostream>

using namespace std;

class Circle{
  int radius;
public:
  Circle() { radius = 1; }
  Circle(int radius) { this->radius = radius; }
  void setRadius(int radius) { this-> radius = radius; }
  double getArea() { return radius *  radius * 3.14; }
};

Circle getCircle() {
  Circle tmp(30);
  return tmp;
  // 객체 tmp 리턴
}

int main(){
  Circle c;
  // 객체가 생성되며 radius = 1로 초기화
  cout << c.getArea() << endl;

  c = getCircle();
  // tmp 객체가 c에 복사
  // 따라서 c의 radius는 30
  cout << c.getArea() << endl;
}

// 출력 예시
// 3.14
// 2826
