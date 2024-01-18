#include <iostream>

using namespace std;

// Base 클래스
class Base{
  int a;
protected:
  void set(int a){ this->a = a; }
public:
  void showA(){ cout << a; }
};

// Base 클래스를 상속받은 Derived 클래스
class Derived : private Base{
  int b;
protected:
  void setB(int b){ this->b = b; }
public:
  void showB(){
    setA(5);         // 1
    showA();         // 2
    cout << b;
  }
};

// Base 클래스를 상속받은 Derived 클래스를 상속받은 GrandDerived 클래스
class GrandDerived : private Derived{
  int c;
protected:
  void setAB(int x){
    setA(x);        // 3
    showA();        // 4
    setB(x);        // 5
  }
};

// 컴파일 오류 발생하는 번호 : 3, 4
// 오답노트
// 3 : Base 클래스를 private로 상속받았기 때문에 showA() 함수의 접근 지정자도 private가 된 상황에서 함수를 실행시킬 수 없음
// 4 : 3과 동일한 이유
