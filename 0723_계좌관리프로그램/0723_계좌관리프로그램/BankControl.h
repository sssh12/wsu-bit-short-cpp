#pragma once

class BankControl
{
private:
	vector<Account*> accounts;

public:
	BankControl();
	~BankControl();

public:
	void MakeAccount();
	void SelectAccount();
	void Deposit();
	void WithDraw();
	void DeleteAccount();
	void PrintAllAccount();
};
