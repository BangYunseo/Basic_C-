#include <iostream>

using namespace std;

class Circle{
  int radius;
public:
  Circle() { radius = 1; }
  Circle(int r) { radius = r; }
  double getArea() { return 3.14 * radius * radius; }
};

int main(){
  Circle donut;
  Circle pizza(30);

  // (1) 객체 이름으로 멤버 접근
  cout << donut.getArea() << endl;

  // (2) 객체 포인터로 멤버 접근
  Circle *p;
  p = &donut;                          // 주소값
  
  // dount의 getArea() 호출
  cout << p->getArea() << endl;
  cout << (*p).getArea() << endl;
  
  // pizza의 getArea() 호출
  p = &pizza;                          // 주소값
  cout << p->getArea() << endl;
  cout << (*p).getArea() << endl;
}

// 출력 예시
// 3.14
// 3.14
// 3.14
// 2826
// 2826
