#include <iostream>

using namespace std;

class Circle{
  int radius;
public:
  Circle() { radius = 1; }
  Circle(int r) { radius = r; }
  void setRadius(int r) { radius = r; }
  double getArea() { return radius * radius * 3.14; }
};

int main() {
  Circle circleArray[3];
  // (1) Circle 객체 배열 생성

  circle[0].setRadius(10);
  circle[1].setRadius(20);
  circle[2].setRadius(30);
  // (2) 배열의 각 원소 객체의 멤버 접근

  for(int i = 0; i < 3; i++)
    cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;

  Circle *p;
  // (3) Circle 클래스 포인터 선언

  p = circleArray;
  // (4) circleArray의 주소 설정

  for(int i = 0; i < 3; i++){
    cout << "Circle " << i << " 의 면적은 " << p->getArea() << endl;
    p++;
    // (5) 주소값을 1씩 증감(배열의 인덱스 증가와 같은 기능)
  }
}

// 출력 예시
// Circle 0의 면적은 314
// Circle 1의 면적은 1256
// Circle 2의 면적은 2826
// Circle 0의 면적은 314
// Circle 1의 면적은 1256
// Circle 2의 면적은 2826
