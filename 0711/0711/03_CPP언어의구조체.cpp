// ĸ��ȭ(������)
#include <iostream>
using namespace std;

// ������ ���ǵ�
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
	// ��ü ���� �� �ʱ�ȭ
	account acc = { "ȫ�浿", 111,1000 };
	acc.print();

	acc.input(2000);
	acc.print();


	return 0;
}
