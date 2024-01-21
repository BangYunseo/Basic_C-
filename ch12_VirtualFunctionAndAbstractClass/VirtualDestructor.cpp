#include <iostream>

using namespace std;

// Base 클래스
class Base{
public:
  virtual ~Base(){ cout << "~Base()" << endl; }
};

// Base 클래스를 상속받은 Derived 클래스
class Derived : public Base{
public:
  virtual ~Derived(){ cout << "~Derived()" << endl; }
};

int main(){
  Derived *dp = new Derived();
  Base *bp = new Derived();

  delete dp;
  delete bp;
  // 순서대로 Derived의 포인터와 Base의 포인터로 소멸
}

// 출력 예시
// ~Derived()
// ~Base()
// ~Derived()
// ~Base()
