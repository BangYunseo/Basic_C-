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
  Circle circleArray[3] = { Circle(10), Circle(20), Circle() };
  // Circle 배열 각각 초기화

  for(int i = 0; i < 3; i++)
    cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
}

// 출력 예시
// Circle 0의 면적은 314
// Circle 1의 면적은 1256
// Circle 2의 면적은 3.14
