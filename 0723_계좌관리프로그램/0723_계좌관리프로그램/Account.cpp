#include "std.h"

Account::Account(int _id, string _name)
	:id(_id), name(_name), balance(0)
{

}

Account::Account(int _id, string _name, int _balance)
	:id(_id), name(_name), balance(_balance)
{

}

int Account::getId() const
{
	return id;
}

string Account::getName() const
{
	return name;
}

int Account::getBalance() const
{
	return balance;
}

void Account::AddBalance(int _money)
{
	balance = balance + _money;
}

void Account::MinBalance(int _money)
{
	balance = balance - _money;
}

void Account::Print() const
{
	cout << id << "\t";
	cout << name << "\t";
	cout << balance << "��\t";
}

void Account::Println() const
{
	cout << "[���¹�ȣ] " << id << endl;
	cout << "[��    ��] " << name << endl;
	cout << "[��    ��] " << balance << "��" << endl;
}
