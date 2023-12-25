#include <iostream>

using namespace std;

class Rectangle{
  int width, height;
public:
  Rectangle(){width = 1; height = 1;}
  Rectangle(int a) {width = a; height = a;}
  Rectangle(int a, int b) {width = a; height = b;}
  int getArea() {return width * height;}
  bool isSquare() {
    if(height == width)
      return true;
    else
      return false;
  }
};

int main() {
  Rectangle rect1;
  Rectangle rect2(3, 5);
  Rectangle rect3(3);

  if(rect1.isSquare()) cout << "rect1은 정사각형이다. " << endl;
  if(rect2.isSquare()) cout << "rect2은 정사각형이다. " << endl;
  if(rect3.isSquare()) cout << "rect3은 정사각형이다. " << endl;
}

// 출력 예시
// rect1은 정사각형이다.
// rect3은 정사각형이다.
