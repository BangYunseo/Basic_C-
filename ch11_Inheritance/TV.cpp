#include <iostream>
#include <string>

using namespace std;

// TV 클래스
class TV{
  int size;
public:
  TV(){ size = 20; }
  TV(int size){ this->size = size; }
  int getSize(){ return size; }
};

// TV 클래스를 상속받은 WideTV 클래스
class WideTV : public TV{
  bool videoIn;
public:
  WideTV(int size, bool videoIn) : TV(size){ this->videoIn = videoIn; }
  bool getVideoIn(){ return videoIn; }
};

// WideTV 클래스를 상속받은 SmartTV
class SmartTV : public WideTV{
  string ipAddr;
  // 인터넷 주소
public:
  SmartTV(string ipAdder, int size) : WideTV(size, true){ this->ipAddr = ipAddr; }
  string getIpAddr(){ return ipAddr; }
};

int main(){
  // 32 인치 크기에 "192.0.0.1"의 인터넷 주소를 가지는 스마트 TV 객체 생성

  SmartTV htv("192.0.0.1", 32);
  cout << "size = " << htv.getSize() << endl;
  cout << "videoIn = " << boolalpha << htv.getVideoIn() << endl;
  // boolalpha는 boolean 값을 true, false로 출력되게 하는 조작자
  cout << "IP = " << htv.getIpAddr() << endl;
}

// 출력 예시
// size = 32
// videoIn = true
// IP = 192.0.0.1
