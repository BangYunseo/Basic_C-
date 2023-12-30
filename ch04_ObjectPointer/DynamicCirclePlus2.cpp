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
  Circle *pArray = new Circle[3];
  // 객체 배열 생성
  // 각 원소 객체의 기본 생성자 실행

  pArray[0].setRadius(10);
  pArray[1].setRadius(20);
  pArray[2].setRadius(30);
  // 반지름 재설정

  for (int i = 0; i < 3; i++)
    cout << pArray[i].getArea() << endl;

  Circle *p = pArray;
  // 포인터 p에 배열의 주소값을 서렂ㅇ

  for (int i = 0; i < 3; i++){
    cout << p->getArea() << endl;
    p++;
    // 다음 원소의 주소로 증가
  }

  delete [] pArray;
  // 객체 배열 소멸
  // 각 배열 원소 객체의 소멸자 ~Circle() 실행
}

// 출력 예시
// 생성자 실행 radius = 1
// 생성자 실행 radius = 1
// 생성자 실행 radius = 1
// 314
// 1256
// 2826
// 314
// 1256
// 2826
// 소멸자 실행 radius = 30
// 소멸자 실행 radius = 20
// 소멸자 실행 radius = 10

// 소멸자는 생성의 반대 순으로 실행
