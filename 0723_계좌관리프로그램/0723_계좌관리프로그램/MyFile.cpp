#include "std.h"

string MyFile::filename = "accounts.txt";


void MyFile::SaveAccount(vector<Account*>& accounts)
{
	ofstream os(filename);   //������ fileopen, "w"

	//���� ���� ���� ����
	os << accounts.size() << endl;

	for (int i = 0; i < accounts.size(); i++)
	{
		Account* acc = accounts[i];
		os << acc->getId() << "\t";
		os << acc->getName() << "\t";
		os << acc->getBalance() << endl;
	}

	os.close();				//fileclose
}


void MyFile::LoadAccount(vector<Account*>& accounts)
{
	ifstream is(filename);   //������ fileopen, "r"

	//���� ����
	int size;		is >> size;

	for (int i = 0; i < size; i++)
	{
		int id;			 is >> id;
		string name;	 is >> name;
		int balance;	 is >> balance;

		Account* acc = new Account(id, name, balance);
		accounts.push_back(acc);
	}

	is.close();				//fileclose
}
