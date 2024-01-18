#include <iostream>

using namespace std;

// Base 클래스
class Base{
  int a;
protected:
  void setA(int a){ this->a = a; }
public:
  void showA(){ cout << a; }
};


// Base 클래스를 상속받은 Derived 클래스
class Derived : private Base{
  int b;
protected:
  void setB(int b){ this->b = b; }
public:
  void showB(){ cout << b; }
};


int main(){
  Derived x;
  x.a = 5;          // 1
  x.setA(10);       // 2
  x.showA();        // 3
  x.b = 10;         // 4
  x.setB(10);       // 5
  x.showB();        // 6
}

// 컴파일 오류 발생하는 번호 : 1, 2, 3, 4, 5
// 오답노트
// 1 : public의 접근 지정자를 사용하지 않았기 때문에 클래스의 멤버 변수에 직접 접근할 수 없음
// 2 : Base 클래스를 private로 상속받았기 때문에 setA(int a) 함수의 접근 지정자도 private가 됨
// 3 : Base 클래스를 private로 상속받았기 때문에 showA() 함수의 접근 지정자도 private가 됨
// 4 : public의 접근 지정자를 사용하지 않았기 때문에 클래스의 멤버 변수에 직접 접근할 수 없음
// 5 : setB(int b) 함수는 protected의 접근 지정자를 사용하기 때문에 다른 함수나 다른 클래스에서 사용할 수 없음
