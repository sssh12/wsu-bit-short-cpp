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
		int type = MyInsert::InputInteger("�������� �Է� (1:�Ϲ� 2:�ſ� 3:���)");
		int id = MyInsert::InputInteger("���¹�ȣ �Է�");
		string name = MyInsert::InputString("�̸� �Է�");
		int balance = MyInsert::InputInteger("�Ա��� �ݾ� �Է�");
		int contribution = 0;
		int donate = (int)(balance * 0.1);
		
		Account* account;
		if (type == 1) {
			account = new Account(id, name, balance);
		}
		else if (type == 2) {
			balance += (int)(balance * 0.1);
			account = new FaithAccount(id, name, balance);
		}
		else if (type == 3) {
			balance -= donate;
			contribution += donate;
			account = new ContriAccount(id, name, balance, contribution);
		}
		else {
			throw "�߸��� ���������Դϴ�.";
		}

		accounts.PushBack(account);
		printf("�����Ǿ����ϴ�.\n");
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