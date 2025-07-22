#pragma once

class BankControl {
private:
	MyArr accounts;

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

private:
	int IdToIdx(int id);
};