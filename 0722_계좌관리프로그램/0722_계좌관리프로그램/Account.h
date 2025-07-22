#pragma once

class Account {
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

	void AddBalance(int money);
	void MinBalance(int money);

public:
	void Print() const;
	void Println() const;
};