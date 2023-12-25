#include <iostream>

using namespace std;

class Circle{
public:
  int radius;
  Circle();           // 위임 생성자
  Circle(int r);      // 타겟 생성자
  double getArea(){
    return 3.14 * radius * radius;
  }
};

Circle::Circle() : Circle(1) { }

Circle::Circle(int r){
  radius = r;
  cout << "반지름 " << radius << " 원 생성" << endl;
}

int main(){
  Circle donut;
  double area = donut.getArea();
  cout << "도넛의 면적은 " << area << endl;

  Circle pizza(30);
  area = pizza.getArea();
  cout << "피자의 면적은 " << area << endl;
}

// 출력 예시
// 반지름 1 원 생성
// 도넛의 면적은 3.14
// 반지름 30 원 생성
// 피자의 면적은 2826
