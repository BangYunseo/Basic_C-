#include <iostream>

using namespace std;

class Circle{
  int radius;
public:
  Circle() { 
    radius = 1; 
    cout << "생성자 실행 radius = " << radius << endl;
  }
  Circle(int r) { 
    radius = r; 
    cout << "생성자 실행 radius = " << radius << endl;
  }
  ~Circle() { cout << "소멸자 실행 radius = " << radius << endl;}
  void setRadius(int r) { radius = r; }
  double getArea() { return 3.14 * radius * radius; }
};

int main(){
  Circle *p, *q;

  p = new Circle;
  q = new Circle(30);

  cout << p->getArea() << endl;
  cout << q->getArea() << endl;

  delete p;
  delete q;
  // 생성한 순서에 관계 없이 원하는 순서대로 delete 연산자 사용 가능
}

// 출력 예시
// 생성자 실행 radius = 1
// 생성자 실행 radius = 30
// 3.14
// 2826
// 소멸자 실행 radius = 1
// 소멸자 실행 radius = 30
