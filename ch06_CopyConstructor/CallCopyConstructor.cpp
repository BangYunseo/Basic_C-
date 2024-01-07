#include <iostream>
#include <cstring>

using namespace std;

class Person{
  char *name;
  int id;
public:
  Person(int id, const char* name){
    this->id = id;
    int len = strlen(name);
    // name의 문자 개수

    this->name = new char[len + 1];
    // name 문자열 공간 할당

    strcpy(this->name, name);
    // name에 문자열 복사
  }
  // 생성자

  Person(Person& person){
    this->id = person.id;
    // id 값 복사

    int len = strlen(person.name);
    // name의 문자 개수

    this->name = new char[len + 1];
    // name 문자열 공간 할당

    strcpy(this->name, person.name);
    // name의 문자열 복사

    cout << "복사 생성자 실행" << this->name << endl;
    // 복사 생성자 실행
  }
  // 복사 생성자

  ~Person(){
    if (name) // 만일 name에 동적 할당된 배열이 있다면
      delete [] name;
      // 동적 할당 메모리 소멸
  }
  // 소멸자

  void changeName(const char *name){
    if(strlen(name) > strlen(this->name))
      return;
    // 현재 name에 할당된 메모리보다 긴 이름으로 바꾸지 못하도록 설정
    strcpy(this->name, name);
  }
  // 이름 변환 함수

  void show(){
    cout << id << ', ' << name << endl;
  }
  // 출력 함수
};

void f(Person person){
  person.changeName("dummy");
}
// (2) 값에 의한 호출로 객체가 전달될 때, person 객체의 복사 생성자를 호출

Person g(){
  Person mother(2, "Jane");
  return mother;
}
// (3) 함수에서 객체를 리턴할 때 mother 객체의 복사본 생성
// 복사본의 복사 생성자를 호출

int main(){
  Person father(1, "Kitae");
  Person son = father;
  // 객체로 초기화하여 객체가 생성될 때 son 객체의 복사 생성자 호출
  
  f(father);
  g();
}

// 출력 예시
// 복사 생성자 실행 Kitae
// 복사 생성자 실행 Kitae
