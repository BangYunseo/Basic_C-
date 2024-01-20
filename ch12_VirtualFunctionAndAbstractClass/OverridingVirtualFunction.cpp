#include <iostream>

using namespace std;

// Base 클래스
class Base{
public:
  virtual void f(){ cout << "Base::f() called" << endl; }
};

// Base 클래스를 상속받은 Derived 클래스
class Derived : public Base{
public:
  virtual void f(){ cout << "Derived::f() called" << endl; }
};

int main(){
  Derived d, *pDer;
  pDer = &d;
  pDer->f();
  // Derived::f() 호출

  Base* pBase;
  pBase = pDer;
  // 업 캐스팅

  pBase->f();
  // 동적 바인딩 발생
  // Derived::f() 실행
}

// 출력 예시
// Derived::f() called
// Derived::f() called
