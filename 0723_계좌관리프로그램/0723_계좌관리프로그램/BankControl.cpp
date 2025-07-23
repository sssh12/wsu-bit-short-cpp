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
	printf("[���� ����]\n\n");
	try
	{
		int id = MyInput::InputInteger("���¹�ȣ");
		string name = MyInput::InputString("�̸�");
		int balance = MyInput::InputInteger("�Աݾ�");

		Account* acc = new Account(id, name, balance);

		accounts.push_back(acc);

		cout << "����Ǿ����ϴ�" << endl;
	}
	catch (const char* msg)
	{
		cout << "���� ����" << endl;
		cout << msg << endl;
	}
}

void BankControl::SelectAccount()
{
	printf("[���� �˻�]\n\n");
	try
	{
		int id = MyInput::InputInteger("���¹�ȣ");

		vector<Account*>::iterator itr;
		itr = find_if(accounts.begin(), accounts.end(),
				[id](Account* acc) { return ( acc->getId() == id ); });

		if (itr == accounts.end()) {
			throw "�ش� ���� ������ �����ϴ�.";
		}

		Account* acc = *itr;	// ***
		acc->Println();
	}
	catch (const char* msg)
	{
		cout << "�˻� ����" << endl;
		cout << msg << endl;
	}
}

void BankControl::Deposit()
{
	printf("[�Ա�]\n\n");
	try
	{
		int id = MyInput::InputInteger("���¹�ȣ");
		int money = MyInput::InputInteger("�Աݾ�");

		vector<Account*>::iterator itr;
		itr = find_if(accounts.begin(), accounts.end(),
			[id](Account* acc) { return (acc->getId() == id); });

		if (itr == accounts.end()) {
			throw "�ش� ���� ������ �����ϴ�.";
		}

		Account* acc = *itr;	// ***
		acc->AddBalance(money);
	}
	catch (const char* msg)
	{
		cout << "���� ����" << endl;
		cout << msg << endl;
	}

}

void BankControl::WithDraw()
{
	printf("[���]\n\n");
	try
	{
		int id = MyInput::InputInteger("���¹�ȣ");
		int money = MyInput::InputInteger("��ݾ�");

		vector<Account*>::iterator itr;
		itr = find_if(accounts.begin(), accounts.end(),
			[id](Account* acc) { return (acc->getId() == id); });

		if (itr == accounts.end()) {
			throw "�ش� ���� ������ �����ϴ�.";
		}

		Account* acc = *itr;	// ***
		acc->MinBalance(money);

		cout << "��� �Ǿ����ϴ�" << endl;
	}
	catch (const char* msg)
	{
		cout << "���� ����" << endl;
		cout << msg << endl;
	}

}

void BankControl::DeleteAccount()
{
	printf("[���� ����]\n\n");
	try
	{
		int id = MyInput::InputInteger("���¹�ȣ");

		vector<Account*>::iterator itr;
		itr = find_if(accounts.begin(), accounts.end(),
			[id](Account* acc) { return (acc->getId() == id); });

		if (itr == accounts.end()) {
			throw "�ش� ���� ������ �����ϴ�.";
		}

		accounts.erase(itr);

		cout << "���� ����" << endl;
	}
	catch (const char* msg)
	{
		cout << "���� ����" << endl;
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
