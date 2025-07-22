#include "std.h"

BankControl::BankControl() {
	MyFile::LoadAccount(&accounts);
}
BankControl::~BankControl() {
	MyFile::SaveAccount(accounts);
}

void BankControl::MakeAccount() {
	printf("���� ����\n\n");

	try {
		int id = MyInsert::InputInteger("���¹�ȣ �Է�");
		string name = MyInsert::InputString("�̸� �Է�");
		int balance = MyInsert::InputInteger("�Ա��� �ݾ� �Է�");

		Account* account = new Account(id, name, balance);

		accounts.PushBack(account);
		printf("����Ǿ����ϴ�.\n");
	}
	catch (const char* err) {
		cout << err << endl;
	}
}
void BankControl::SelectAccount() {
	printf("���� �˻�\n\n");

	try {
		int id = MyInsert::InputInteger("���¹�ȣ �Է�");

		int idx = IdToIdx(id);

		Account* paccount = (Account*)accounts.getData(idx);
		paccount->Println();
	}
	catch (const char* err) {
		cout << "�˻� ����: ";
		cout << err << endl;
	}
}

void BankControl::Deposit() {
	printf("�Ա�\n\n");

	try {
		int id = MyInsert::InputInteger("���¹�ȣ �Է�");

		int idx = IdToIdx(id);

		int money = MyInsert::InputInteger("�Ա��� �ݾ� �Է�");

		Account* paccount = (Account*)accounts.getData(idx);
		paccount->AddBalance(money);

		printf("�ԱݵǾ����ϴ�.\n");
	}
	catch (const char* err) {
		cout << "�ӱ� ����: ";
		cout << err << endl;
	}
}
void BankControl::WithDraw() {
	printf("���\n\n");

	try {
		int id = MyInsert::InputInteger("���¹�ȣ �Է�");

		int idx = IdToIdx(id);

		int money = MyInsert::InputInteger("����� �ݾ� �Է�");

		Account* paccount = (Account*)accounts.getData(idx);
		paccount->MinBalance(money);

		printf("��ݵǾ����ϴ�.\n");
	}
	catch (const char* err) {
		cout << "��� ����: ";
		cout << err << endl;
	}
}
void BankControl::DeleteAccount() {
	printf("���� ����\n\n");

	try {
		int id = MyInsert::InputInteger("���¹�ȣ �Է�");

		int idx = IdToIdx(id);

		accounts.Erase(idx);

		printf("�����Ǿ����ϴ�.\n");
	}
	catch (const char* err) {
		cout << "���� ����: ";
		cout << err << endl;
	}
}

void BankControl::PrintAllAccount() {
	for (int i = 0; i < accounts.getSize(); i++) {
		printf("[%d] ", i);
		Account* paccount = (Account*)accounts.getData(i);
		paccount->Print();
	}
	printf("------------------------------------------------------------------------\n");
}

int BankControl::IdToIdx(int id) {
	for (int i = 0; i < accounts.getSize(); i++) {
		Account* account = (Account*)accounts.getData(i);

		if (account->getId() == id) {
			return i;
		}
	}

	throw "�ش��ϴ� ���� ������ �����ϴ�.";
}