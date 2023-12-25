#include <iostream>

using namespace std;

class Circle{
public:
  int radius;

  Circle() {
    radius = 1;
    cout << "반지름 " << radius << "인 원 생성" << endl;
  }
  Circle(int r){
    radius = r;
    cout << "반지름 " << radius << "인 원 생성" << endl;
  }
  ~Circle(){
    cout << "반지름 " << radius << "인 원 소멸" << endl;
  }
  double getArea(){ return 3.14 * radius * radius; }
};

int main(){
  Circle donut;
  Circle pizza(30);
  return 0;
  // main() 함수가 종료되면 main() 함수의 스택에 생성된 pizza, donut 객체가 소멸함
}

// 출력 예시
// 반지름 1인 원 생성
// 반지름 30인 원 생성
// 반지름 30인 원 소멸
// 반지름 1인 원 소멸

// 객체는 생성의 반대 순으로 소멸
