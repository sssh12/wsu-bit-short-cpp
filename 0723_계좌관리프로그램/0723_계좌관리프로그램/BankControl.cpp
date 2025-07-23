#include "std.h"

BankControl::BankControl()
{
	MyFile::LoadAccount(accounts);
}

BankControl::~BankControl()
{
	MyFile::SaveAccount(accounts);
}

void BankControl::MakeAccount()
{
	printf("[계좌 개설]\n\n");
	try
	{
		int id = MyInput::InputInteger("계좌번호");
		string name = MyInput::InputString("이름");
		int balance = MyInput::InputInteger("입금액");

		Account* acc = new Account(id, name, balance);

		accounts.push_back(acc);

		cout << "저장되었습니다" << endl;
	}
	catch (const char* msg)
	{
		cout << "저장 실패" << endl;
		cout << msg << endl;
	}
}

void BankControl::SelectAccount()
{
	printf("[계좌 검색]\n\n");
	try
	{
		int id = MyInput::InputInteger("계좌번호");

		vector<Account*>::iterator itr;
		itr = find_if(accounts.begin(), accounts.end(),
				[id](Account* acc) { return ( acc->getId() == id ); });

		if (itr == accounts.end()) {
			throw "해당 계좌 정보가 없습니다.";
		}

		Account* acc = *itr;	// ***
		acc->Println();
	}
	catch (const char* msg)
	{
		cout << "검색 실패" << endl;
		cout << msg << endl;
	}
}

void BankControl::Deposit()
{
	printf("[입금]\n\n");
	try
	{
		int id = MyInput::InputInteger("계좌번호");
		int money = MyInput::InputInteger("입금액");

		vector<Account*>::iterator itr;
		itr = find_if(accounts.begin(), accounts.end(),
			[id](Account* acc) { return (acc->getId() == id); });

		if (itr == accounts.end()) {
			throw "해당 계좌 정보가 없습니다.";
		}

		Account* acc = *itr;	// ***
		acc->AddBalance(money);
	}
	catch (const char* msg)
	{
		cout << "수정 오류" << endl;
		cout << msg << endl;
	}

}

void BankControl::WithDraw()
{
	printf("[출금]\n\n");
	try
	{
		int id = MyInput::InputInteger("계좌번호");
		int money = MyInput::InputInteger("출금액");

		vector<Account*>::iterator itr;
		itr = find_if(accounts.begin(), accounts.end(),
			[id](Account* acc) { return (acc->getId() == id); });

		if (itr == accounts.end()) {
			throw "해당 계좌 정보가 없습니다.";
		}

		Account* acc = *itr;	// ***
		acc->MinBalance(money);

		cout << "출금 되었습니다" << endl;
	}
	catch (const char* msg)
	{
		cout << "수정 오류" << endl;
		cout << msg << endl;
	}

}

void BankControl::DeleteAccount()
{
	printf("[계좌 삭제]\n\n");
	try
	{
		int id = MyInput::InputInteger("계좌번호");

		vector<Account*>::iterator itr;
		itr = find_if(accounts.begin(), accounts.end(),
			[id](Account* acc) { return (acc->getId() == id); });

		if (itr == accounts.end()) {
			throw "해당 계좌 정보가 없습니다.";
		}

		accounts.erase(itr);

		cout << "삭제 성공" << endl;
	}
	catch (const char* msg)
	{
		cout << "삭제 실패" << endl;
		cout << msg << endl;
	}
}

void BankControl::PrintAllAccount()
{
	for (int i = 0; i < accounts.size(); i++)
	{
		printf("[%d] ", i);
		Account* acc = accounts[i];
		acc->Print();
		cout << endl;
	}
	printf("-----------------------------------------------\n");
}
