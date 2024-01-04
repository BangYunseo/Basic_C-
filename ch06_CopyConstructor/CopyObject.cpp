#include <iostream>

using namespace std;

class Circle{
private:
  int radius;
public:
  Circle(Circle& c){
    this->radius = radius;
    cout << "복사 생성자 실행 radius = " << radius << endl;
    // 복사 생성자 구현
  }

  Circle() { radius = 1; }
  Circle(int r) { this->radius = radius; }
  double getArea() { return radius * radius * 3.14; }
}; 

int main(){
  Circle src(30);
  // src 객체의 보통 생성자 호출

  Circle dest(src);
  // dest 객체의 복사 생성자 호출

  cout << "원본의 면적 = " << src.getArea() << endl;
  cout << "사본의 면적 = " << dest.getArea() << endl;
  // 사본은 원본 객체 src를 복사했으므로 두 값은 같을 수밖에 없음
  // 또한, src를 복사할 때 복사 생성자를 이용한 것을 확인할 수 있음
}

// 출력 예시
// 복사 생성자 실행 radius = 30
// 원본의 면적 = 2826
// 사본의 면적 = 2826
