#include "std.h"

string MyFile::filename = "accounts.txt";

void MyFile::LoadAccount(MyArr* paccounts) {
	ifstream is(filename);

	int size;
	is >> size;
	for (int i = 0; i < size; i++) {
		int type, id, balance, contribution = 0;
		string name;
		is >> type >> id >> name >> balance;
		Account* paccount = nullptr;
		if (type == 1) {
			paccount = new Account(id, name, balance);
		} else if (type == 2) {
			paccount = new FaithAccount(id, name, balance);
		} else if (type == 3) {
			is >> contribution;
			paccount = new ContriAccount(id, name, balance, contribution);
		}
		paccounts->PushBack(paccount);
	}
}

void MyFile::SaveAccount(MyArr& accounts) {
	ofstream os(filename);
	os << accounts.getSize() << endl;
	for (int i = 0; i < accounts.getSize(); i++) {
		Account* paccount = (Account*)accounts.getData(i);
		os << paccount->getType() << "\t" << paccount->getId() << "\t";
		os << paccount->getName() << "\t" << paccount->getBalance();
		if (paccount->getType() == 3) {
			ContriAccount* c = (ContriAccount*)paccount;
			os << "\t" << c->getContriBution();
		}
		os << endl;
	}
	os.close();
}