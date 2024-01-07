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

    cout << "복사 생성자 실행, 원본 객체의 이름 " << this->name << endl;
    // 원본 객체의 이름을 출력하며 복사 생성자 실행
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

int main(){
  Person father(1, "Kitae");
  // (1) father 객체 생성

  Person daughter(father);
  // (2) daughter 객체 복사 생성
  // Person에 작성된 깊은 복사 생성자가 호출

  cout << "daughter 객체 생성 직후 " << endl;
  father.show();
  daughter.show();
  // (3) father 객체와 daughter 객체 각각 출력

  daughter.changeName("Grace");
  // (4) daughter 객체의 이름을 Grace로 변경

  cout << "daughter 이름을 Grace로 변경한 후 " << endl;

  father.show();
  daughter.show();
  // (5) father 객체와 daughter 객체 각각 출력


  return 0;
  // (6) daughter 객체와 father 객체 각각 소멸
  // 소멸은 생성된 순서의 반대로 진행됨
  // 따라서 daughter 객체, father 객체 순서로 소멸
}

// 출력 예시
// 복사 생성자 실행, 원본 객체의 이름 Kitae
// daughter 객체 생성 직후
// 1, Kitae
// 1, Kitae
// daughter 이름을 Grace로 변경한 후
// 1, Kitae
// 1, Grace
