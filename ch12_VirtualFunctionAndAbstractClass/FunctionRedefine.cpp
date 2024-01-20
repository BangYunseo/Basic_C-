#include <iostream>

using namespace std;

// Base 클래스
class Base{
public:
  void f(){ cout << "Base::f() called" << endl; }
};

// Base 클래스를 상속받은 Derived 클래스
class Derived : public Base{
public:
  void f(){ cout << "Derived::f() called" << endl; }
};

void main(){
  Derived d, *pDer;
  pDer = &d;
  pDer->f();
  // Derived::f() 호출

  Base* pBase;
  pBase = pDer;
  // 업캐스팅

  pBase->f();
  // Base::f() 호출
}

// 출력 예시
// Derived::f() called
// Base::f() called
