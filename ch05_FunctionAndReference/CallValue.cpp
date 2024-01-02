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
  Circle(int radius) { 
    this->radius = radius; 
    cout << "생성자 실행 radius = " << radius << endl;
  }
  ~Circle() { 
    cout << "소멸자 실행 radius = " << radius << endl;
  }
  double getArea() { return radius * radius * 3.14; }
  int getRadius() { return radius; }
  void setRadius(int radius) { this->radius = radius; }
};

void increase(Circle c){
  int r = c.getRadius();
  c.setRadius(r + 1);
}

int main() {
  Circle waffle(30);
  increase(waffle);
  cout << waffle.getRadius() << endl;
}

// 출력 예시
// 생성자 실행 radius = 30                    << waffle 생성
// 소멸자 실행 radius = 31                    << c의 생성자가 실행되지 않았으며 c가 소멸함
// 30
// 소멸자 실행 radius = 30                    << waffle이 소멸

// 값에 의한 호출로는 매개 변수의 생성자를 실행시킬 수 없다는 것을 알 수 있음




