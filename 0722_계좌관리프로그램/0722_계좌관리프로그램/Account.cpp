#include "std.h"

Account::Account(int _id, string _name): type(1), id(_id), name(_name) {};
Account::Account(int _id, string _name, int _balance)
	:  type(1), id(_id), name(_name), balance(_balance) {
};

int Account::getId() const {
	return id;
}

string Account::getName() const {
	return name;
}

int Account::getBalance() const {
	return balance;
}

int Account::getType() const {
	return type;
}

void Account::AddBalance(int money) {
	if (money <= 0) {
		throw "잘못된 금액이 입력됐습니다.";
	}

	balance += money;
}
void Account::MinBalance(int money) {
	if (balance < money) {
		throw "잘못된 금액이 입력됐습니다.";
	}

	balance -= money;
}

void Account::Println() const {
	cout << "[계좌번호]: " << id << endl;
	cout << "[이    름]: " << name << endl;
	cout << "[잔    액]: " << balance << endl;
}

void Account::Print() const {
	cout << "계좌번호: " << id << "\t" << "이름: " << name;
	cout << "\t" << "잔액: " << balance << endl;
}