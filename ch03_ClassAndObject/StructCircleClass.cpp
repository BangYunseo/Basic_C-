#include <iostream>

using namespace std;

struct StructCircle{
private:
  int radius;
public:
  StructCircle(int r) { radius = r; }
  double getArea() { return radius * radius * 3.14; }
};

int main(){
  StructCircle waffle(3);
  cout << "면적은 " << waffle.getArea() << endl;
}

// 출력 예시
// 면적은 28.26
