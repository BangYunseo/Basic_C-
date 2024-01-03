#include <iostream>

using namespace std;

class Circle{
private:
  int radius;
public:
  Circle() { radius = 1; }
  Circle(int r) { this->radius = radius; }
  double getArea() { return 3.14 * radius * radius; }
  void setRadius(int radius) { this->radius = radius; }
};

void increaseCircle(Circle &c){
  // 참조 매개 변수
  int r = c.getRadius();
  c.setRadius(r + 1);
}

void readRadius(Circle &c){
  int r;
  cout << "정수 값으로 반지름을 입력하세요 >> ";
  cin >> r;
  // 반지름 값 입력
  
  c.setRadius(r);
  // 객체 c에 반지름 설정
}

int main(){
  Circle donut;
  readRadius(donut);
  cout << "donut의 면적 = " << donut.getArea() << endl;
}

// 출력 예시
// 정수 값으로 반지름을 입력하세요 >> 3
// donut의 면적 = 28.26
