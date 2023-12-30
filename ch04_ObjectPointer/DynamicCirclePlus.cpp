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
  int n;
  while(true){
    cout << "정수 반지름 입력(음수가 입력되면 종료) >> ";
    cin >> n;
    // 입력받는 코드
    
    if (n < 0) break;
    // 음수가 입력되면 종료
    
    Circle *p = new Circle(n);
    // 동적 객체 생성
    cout << "원의 면적은 " << p->getArea() << endl;
    delete p;
    // 객체 반환
    // 만약 delete 연산자를 사용하지 않았다면 메모리 누수가 발생
  }
}

// 출력 예시
// 정수 반지름 입력(음수가 입력되면 종료 >> 5
// 생성자 실행 radius = 5
// 원의 면적은 78.5
// 소멸자 실행 radius = 5
// 정수 반지름 입력(음수가 입력되면 종료 >> 9
// 생성자 실행 radius = 9
// 원의 면적은 254.34
// 소멸자 실행 radius = 9
// 정수 반지름 입력(음수가 입력되면 종료 >> -1
