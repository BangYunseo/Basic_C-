#include <iostream>

using namespace std;

class Rectangle{
public:
  int width, height;
  int getArea() { return width * height; }   
};
int main(){
  Rectangle r;
  r.width = 3;
  r.height = 5;
  cout << "사각형의 면적은 " << r.getArea() << endl;
}

// 출력 예시
// 사각형의 면적은 15
