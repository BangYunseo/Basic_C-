#include <iostream>

using namespace std;

class Person {
public:
	double money;				          // 개인 소유 돈
	void addMoney(int money) { this->money += money; }

	static int sharedMoney;		    // 공공 소유 돈
	static void addShared(int n) { sharedMoney += n; }
};

int Person::sharedMoney = 10;	    // 공공 소유 돈을 10으로 초기화

int main() {
	Person::addShared(50);		
	// static 멤버 접근, 공공 소유의 돈 50 추가
	// han 객체가 생기기 전부터 static 멤버에 접근

	cout << Person::sharedMoney << endl;
	// han 객체 생기기 전까지의 공공 소유 돈 출력

	Person han;
	han.money = 100;				          // han의 개인 소유 돈 100
	han.sharedMoney = 200;			      // han의 공공 소유 돈 200으로 초기화
	Person::sharedMoney = 300;		    // 공공 소유 돈 자체를 300으로 초기화
	Person::addShared(100);			      // 공공 소유 돈에 100 추가

	cout << han.money << ' ' << Person::sharedMoney << endl;
}
