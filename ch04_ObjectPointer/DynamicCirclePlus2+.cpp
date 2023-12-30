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
  cout << "생성하고자 하는 원의 개수 >> ";
  int n, radius;
  cin >> n;
  // 원의 개수 입력

  Circle *pArray = new Circle[n];
  // n개의 객체 배열 생성
  // 각 원소 객체의 기본 생성자 실행

  for (int i = 0; i < n; i++){
    cout << "원 " << i + 1 << " : ";
    // 프롬프트 출력

    cin >> radius;
    // 반지름 입력

    pArray[i].setRadius(radius);
    // 각 Circle 객체를 반지름으로 초기화
  }

  int count = 0;
  // 카운트 변수

  Circle *p = pArray;
  // 원의 면적을 잠시동안 할당할 포인터 생성
  
  for(int i = 0; i < n; i++){
    cout << p->getArea() << ' ';
    // 원의 면적 출력

    if (p->getArea() >= 100 && p->getArea() <= 200) count++;
    // 원의 면적이 100 ~ 200일 경우 count 변수 증감
    p++
  }
  
  cout << endl; << "면적이 100 ~ 200인 원의 개수는 " << count << "개" << endl;

  delete [] pArray;
  // 객체 배열 소멸
  // 각 배열 원소 객체의 소멸자 ~Circle() 실행
}


// 출력 예시
// 생성하고자 하는 원의 개수 >> 4
// 원 1 : 5
// 원 2 : 6
// 원 3 : 7
// 원 4 : 8
// 78.5 113.04 153.86 200.96
// 면적이 100 ~ 200인 원의 개수는 2개
