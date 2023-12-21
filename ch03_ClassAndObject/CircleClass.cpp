#include <iostream>

using namespace std;

class Circle{
public:
  int radius;
  double getArea(){ 
    return 3.14 * radius * radius;
  }
};

int main(){
  Circle donut;
  donut.radius = 3;
  // donut 객체의 반지름을 3으로 설정
  // public으로 선언되어 있으므로 가능
  double area = donut.getArea();
  cout << "도넛의 면적은 " << area << endl;

  Circle pizza;
  pizza.radius = 50;
  // pizza 객체의 반지름을 50으로 설정
  // public으로 선언되어 있으므로 가능
  area = pizza.getArea();
  cout << "피자의 면적은 " << area << endl;
}

// 출력 예시
// 도넛의 면적은 28.26
// 피자의 면적은 7850
