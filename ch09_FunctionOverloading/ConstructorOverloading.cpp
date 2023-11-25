#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class MyVector{
  int *p;
  int size;
public:
  MyVector(int n = 100){
    p = new int[n];
    size = n;
  }
  /*
  아래처럼 위임생성자로도 작성 가능
  
  MyVector() : MyVector(100) {}
  MyVector(int n){
    p = new int[n];
    size = n;
  }
  */
  ~MyVector() { delete []p; }
};

int main(){
  MyVector *v1, *v2;
  v1 = new MyVector();
  // 디폴트로 정수 100개의 배열 동적 할당
  
  v2 = new MyVector(1024);
  // 정수 1024개의 배열 동적 할당
  
  delete v1;
  delete v2;
}
