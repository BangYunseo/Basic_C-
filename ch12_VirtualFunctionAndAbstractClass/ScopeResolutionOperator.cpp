#include <iostream>

using namespace std;

// Shape 클래스
class Shape{
public:
  virtual void draw(){
    cout << "---Shape---";
  }
};

// Shape 클래스를 상속받은 Circle 클래스
class Circle : public Shape{
public:
  virtual void draw(){
    Shape::draw();
    // 기본 클래스의 draw() 호출 : 정적 바인딩

    cout << "Circle" << endl;
  }
};

int main(){
  Circle circle;
  Shape *pShape = &circle;

  pShape->draw();
  // 동적 바인딩을 포함하는 호출
  
  pShape->Shape::draw();
  // 정적 바인딩
}

// 출력 예시
// ---Shape---Circle
// ---Shape---
