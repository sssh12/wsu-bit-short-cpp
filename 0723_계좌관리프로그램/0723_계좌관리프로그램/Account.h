#pragma once

class Account
{
private:
	int id;
	string name;
	int balance;

public:
	Account(int _id, string _name);
	Account(int _id, string _name, int _balance);

public:
	int getId() const;
	string getName() const;
	int getBalance() const;

public:
	void AddBalance(int _money);
	void MinBalance(int _money);
	void Print() const;
	void Println() const;
};
