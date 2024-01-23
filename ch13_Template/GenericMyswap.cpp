#include <iostream>

using namespace std;

class Circle{
  int radius;
public:
  Circle(int radius = 1){ this->radius = radius; }
  int getRadius(){ return radius; }
};

template <class T>
void myswap(T& a, T& b){
  T tmp;
  tmp = a;
  a = b;
  b = tmp;
}

int main(){
  int a = 4, b = 5;
  myswap(a, b);
  cout << "a = " << a << ", " << "b = " << b << endl;
  // myswap(int& a, int& b) 함수 구체화 및 호출

  double c = 0.3, d = 12.5;
  myswap(c, d);
  cout << "c = " << c << ", " << "d = " << d << endl;
  // myswap(double& c, double& d) 함수 구체화 및 호출

  Circle donut(5), pizza(20);
  myswap(donut, pizza);
  cout << "donut radius = " << donut.getRadius() << ", ";
  cout << "pizza radius = " << pizza.getRadius() << endl;
  // myswap(Circle& a, Circle& b) 함수 구체화 및 호출
}

// 출력 예시
// a = 5, b = 4
// c = 12.5, d = 0.3
// donut radius = 20, pizza radius = 5
