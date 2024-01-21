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
  void f(){ cout << "Derived::f() called" << endl; }
};

// Derived 클래스를 상속받은 GrandDerived 클래스
class GrandDerived : public Derived{
public:
  void f(){ cout << "GrandDerived::f() called" << endl; }
};

int main(){
  GrandDerived g;
  Base *bp;
  Derived *dp;
  GrandDerived *gp;

  bp = dp = gp = &g;

  bp->f(); dp->f(); gp->f();
  // 동적 바인딩에 의해 모두 GrandDerived의 함수 f() 호출
}

// 출력 예시
// GrandDerived::f() called
// GrandDerived::f() called
// GrandDerived::f() called
