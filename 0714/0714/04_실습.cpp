#include <iostream>
using namespace std;

class Account {
private: 
	int id;
	string name;
	int balance;

public:
	Account(int _id, string _name, int _balance) {
		id = _id;
		name = _name;
		balance = _balance;
	}
	Account(int _id, string _name) {
		id = _id;
		name = _name;
		balance = 0;
	}
	~Account() {

	}

public:
	int getId() {
		return id;
	}

	string getName() {
		return name;
	}

	int getBalance() {
		return balance;
	}

public:
	bool AddMoney(int _money) {
		if (_money <= 0) {
			return false;
		}

		balance += _money;
		return true;
	}

	bool MinMoney(int _money) {
		if ((_money <= 0) || (_money > balance)) {
			return false;
		}

		balance -= _money;
		return true;
	}

public:
	void Print() {
		cout << id << "\t" << name << "\t" << balance << "¿ø" << endl;
	}
};


int main() {
	Account acc1(111, "È«±æµ¿", 1000);
	Account acc2(222, "¿À½ÂÇÏ");

	acc1.AddMoney(2000);


	acc1.Print();

	acc1.MinMoney(4000);


	return 0;
}