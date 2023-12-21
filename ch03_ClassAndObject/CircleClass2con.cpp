#include <iostream>

using namespace std;

class Circle{
public:
  int radius;
  Circle() {
    radius = 1;
    cout << "반지름 " << radius << " 인 원 생성" << endl;
  }
  Circle(int r) {
    radius = r;
    cout << "반지름 " << radius << " 인 원 생성" << endl;
  }
  double getArea(){ 
    return 3.14 * radius * radius;
  }
};

int main(){
  Circle donut;
  double area = donut.getArea();
  cout << "도넛의 면적은 " << area << endl;

  Circle pizza(50);
  area = pizza.getArea();
  cout << "피자의 면적은 " << area << endl;
}

// 출력 예시
// 반지름 1 인 원 생성
// 도넛의 면적은 3.14
// 반지름 50 인 원 생성
// 피자의 면적은 7850
