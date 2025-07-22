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
		throw "�߸��� �ݾ��� �Էµƽ��ϴ�.";
	}

	balance += money;
}
void Account::MinBalance(int money) {
	if (balance < money) {
		throw "�߸��� �ݾ��� �Էµƽ��ϴ�.";
	}

	balance -= money;
}

void Account::Println() const {
	cout << "[���¹�ȣ]: " << id << endl;
	cout << "[��    ��]: " << name << endl;
	cout << "[��    ��]: " << balance << endl;
}

void Account::Print() const {
	cout << "���¹�ȣ: " << id << "\t" << "�̸�: " << name;
	cout << "\t" << "�ܾ�: " << balance << endl;
}