#include <iostream> 
#include <string> 

using namespace std;

class Book {
  string title; 
  string press;
  string author; 
public:
  Book(string title="", string press="", string author="") {
    this->title = title;
    this->press = press;
    this->author = author; 
}
  friend ostream& operator << (ostream& stream, Book b); 
  // friend 선언 
};

// << 연산자 함수
ostream& operator << (ostream& stream, Book b) { 
  stream << b.title << ", " << b.press << ", " << b.author; 
  return stream;
}

int main() {
  Book book("소유냐 존재냐", "한국출판사", "에리히프롬"); 
  // Book 객체 생성 
  
  cout << book; 
  // Book 객체 book 화면 출력
}

// 출력 예시
// 소유냐 존재냐, 한국출판사, 에리히프롬
