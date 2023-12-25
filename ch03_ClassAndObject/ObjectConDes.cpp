#include <iostream>

using namespace std;

class Circle{
public:
  int radius;
  Circle() {
    radius = 1;
    cout << "반지름 " << radius << "인 원 생성" << endl;
  }
  Circle(int r) {
    radius = r;
    cout << "반지름 " << radius << "인 원 생성" << endl;
  }
  ~Circle() {
    cout << "반지름 " << radius << "인 원 소멸" << endl;
  }
  double getArea() {return radius * radius * 3.14;}
};

Circle globalD(100);
Circle globalP(200);
// 전역 객체 생성

void Circle2(){
  Circle Donut2(10);
  Circle Pizza2(20);
}
// 지역 객체 생성
// main함수에서 실행됨

int main(){
  Circle mainDonut;
  Circle mainPizza(30);
  // 지역 객체 생성
  
  Circle2();
}

// 출력 예시
// 반지름 100인 원 생성
// 반지름 200인 원 생성
// 반지름 1인 원 생성
// 반지름 30인 원 생성
// 반지름 10인 원 생성
// 반지름 20인 원 생성
// 반지름 20인 원 소멸
// 반지름 10인 원 소멸
// 반지름 30인 원 소멸
// 반지름 1인 원 소멸
// 반지름 200인 원 소멸
// 반지름 100인 원 소멸

// 소멸 순서가 생성의 순서 역순인 것을 알 수 있음
