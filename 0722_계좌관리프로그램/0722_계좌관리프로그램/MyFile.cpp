#include "std.h"

string MyFile::filename = "accounts.txt";

void MyFile::LoadAccount(MyArr* paccounts) {
	ifstream is(filename);	

	int size;
	is >> size;

	for (int i = 0; i < size; i++) {
		int id;
		is >> id;

		string name;
		is >> name;

		int balance;
		is >> balance;

		Account* paccount = new Account(id, name, balance);
		paccounts->PushBack(paccount);
	}
}

void MyFile::SaveAccount(MyArr& accounts) {
	ofstream os(filename);

	os << accounts.getSize() << endl;

	for (int i = 0; i < accounts.getSize(); i++) {
		Account* paccount = (Account*)accounts.getData(i);
		os << paccount->getId() << "\t";
		os << paccount->getName() << "\t";
		os << paccount->getBalance() << endl;
	}

	os.close();				// fileclose
}