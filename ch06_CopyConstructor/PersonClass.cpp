#include <iostream>
#include <cstring>

using namespace sd;

class Person{
  char* name;
  int id;
public:
  Person(int id, const char* name){
    this->id = id;
    int len = strlen(name);
    // name의 문자 개수
    
    this->name = new char [len + 1];
    // name 문자열 공간 할당
    
    strcpy(this->name, name);
    // name에 문자열 복사
  }
  // 생성자

  ~Person(){
    if (name) // 만일 name에 동적 할당된 배열이 있을 때만 작동
      delete [] name;
    // 동적 메모리 할당 소멸 및 name 메모리 반환
  }
  // 소멸자
  void changeName(const char* name){ // 이름 변경 함수
    if(strlen(name) > strlen(this->name))  return;
    strcpy(this->name, name);
  }

  void show(){
    cout << id << ', ' << name << endl;
  }
};

int main(){
  Person father(1, "Kitae");            // (1) father 객체 생성
  Person daughter(father);              // (2) daughter 객체 복사 생성. 복사생성자호출
  // 컴파일러가 삽입한 디폴트 복사 생성자 호출
  
  cout << "daughter 객체 생성 직후 ----" << endl;
  father.show();                        // (3) father 객체 출력 
  daughter.show();                      // (3) daughter 객체 출력
  
  daughter.changeName("Grace");         // (4) daughter의 이름을 "Grace"로 변경 
  cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
  father.show();                        // (5) father 객체 출력 
  daughter.show();                      // (5) daughter 객체 출력

  return 0;
  // daughter, father 순으로 소멸
  // but father가 소멸할 때 프로그램이 비정상적으로 종료
}
