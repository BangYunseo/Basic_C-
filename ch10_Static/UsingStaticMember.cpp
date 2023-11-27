#include <iostream>

using namespace std;

class Person {
public:
	double money;				// 개인 소유 돈
	void addMoney(int money) { this->money += money; }

	static int sharedMoney;		// 공공 소유 돈
	static void addShared(int n) { sharedMoney += n; }
};

int Person::sharedMoney = 10;	// 공공 소유 돈을 10으로 초기화

int main() {
	Person p;
	p.money = 100;			// p의 돈은 100
	p.sharedMoney = 200;	// static 멤버 접근, 공공 소유 돈 200으로 초기화

	Person a;
	a.money = 150;			// a의 돈은 150
	a.addMoney(200);		// a의 돈 150에 200 추가
	a.addShared(200);		// 위의 공공 소유 돈 200에 200 추가 = 400

	cout << p.money << ' ' << a.money << endl;
	cout << p.sharedMoney << ' ' << a.sharedMoney << endl;
}

// 출력 예제
// 100 350
// 400 400
