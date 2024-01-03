#include <iostream>

using namespace std;

class Circle{
private:
  int radius;
public:
  Circle() { 
    radius = 1; 
    cout << "생성자 실행 radius = " << radius << endl;
  }
  Circle(int r) { 
    this->radius = radius; 
    cout << "생성자 실행 radius = " << radius << endl;
  }
  ~Circle(){
    cout << "소멸자 실행 radius = " << radius << endl;
  }
  double getArea() { return 3.14 * radius * radius; }
  int getRadius() { return radius; }
  void setRadius(int radius) { this->radius = radius; }
};

void increaseCircle(Circle &c){
  // 참조 매개 변수
  int r = c.getRadius();
  c.setRadius(r + 1);
}

int main(){
  Circle waffle(30);
  increaseCircle(waffle);
  // 참조에 의한 호출

  cout << waffle.getRadius() << endl;
}

// 출력 예시
// 생성자 실행 radius = 30
// 31
// 소멸자 실행 radius = 31


// waffle 객체가 생성되고 소멸되는 과정을 확인할 수 있음
