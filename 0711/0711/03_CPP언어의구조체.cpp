// 캡슐화(데이터)
#include <iostream>
using namespace std;

// 데이터 정의됨
struct account {
	string name;
	int  accid;
	int  balance;

	void print() {
		cout << name << ", " << accid << ", " << balance << endl;
	}

	void input(int money) {
		balance += money;
	}
};

int main() {
	// 객체 생성 및 초기화
	account acc = { "홍길동", 111,1000 };
	acc.print();

	acc.input(2000);
	acc.print();


	return 0;
}
