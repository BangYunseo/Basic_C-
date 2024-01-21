#include <iostream>

using namespace std;

// Calculator 클래스
class Calculator{
public:
  virtual int add(int a, int b) = 0;
  // 두 정수의 합 리턴

  virtual int substract(int a, int b) = 0;
  // 두 정수의 차 리턴

  virtual double average(int a[], int size) = 0;
  // 배열 a의 평균 리턴, size는 배열의 크기
};

// Calculator 클래스를 상속받은 GoodCalc 클래스
class GoodCalc : public Calculator{
public:
  int add(int a, int b){ return a + b; }
  int substract(int a, int b){ return a - b; }
  double average(int a[], int size){
    double sum = 0;
    for(int i = 0; i < size; i++)
      sum += a[i];
    return sum / size;
  }
};

int main(){
  int a[] = {1, 2, 3, 4, 5};
  Calculator *p = new GoodCalc();
  cout << p->add(2, 3) << endl;
  cout << p->substract(2, 3) << endl;
  cout << p->average(a, 5) << endl;
  delete p;
}

// 출력 예시
// 5
// -1
// 3
