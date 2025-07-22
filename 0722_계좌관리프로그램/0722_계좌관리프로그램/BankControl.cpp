#include "std.h"

BankControl::BankControl() {
	MyFile::LoadAccount(&accounts);
}
BankControl::~BankControl() {
	MyFile::SaveAccount(accounts);
}

void BankControl::MakeAccount() {
	printf("계좌 생성\n\n");

	try {
		int type = MyInsert::InputInteger("계좌종류 입력 (1:일반 2:신용 3:기부)");
		int id = MyInsert::InputInteger("계좌번호 입력");
		string name = MyInsert::InputString("이름 입력");
		int balance = MyInsert::InputInteger("입금할 금액 입력");
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
			throw "잘못된 계좌종류입니다.";
		}

		accounts.PushBack(account);
		printf("생성되었습니다.\n");
	}
	catch (const char* err) {
		cout << err << endl;
	}
}
void BankControl::SelectAccount() {
	printf("계좌 검색\n\n");

	try {
		int id = MyInsert::InputInteger("계좌번호 입력");

		int idx = IdToIdx(id);

		Account* paccount = (Account*)accounts.getData(idx);
		paccount->Println();
	}
	catch (const char* err) {
		cout << "검색 실패: ";
		cout << err << endl;
	}
}

void BankControl::Deposit() {
	printf("입금\n\n");

	try {
		int id = MyInsert::InputInteger("계좌번호 입력");

		int idx = IdToIdx(id);

		int money = MyInsert::InputInteger("입금할 금액 입력");

		Account* paccount = (Account*)accounts.getData(idx);
		paccount->AddBalance(money);

		printf("입금되었습니다.\n");
	}
	catch (const char* err) {
		cout << "임금 실패: ";
		cout << err << endl;
	}
}
void BankControl::WithDraw() {
	printf("출금\n\n");

	try {
		int id = MyInsert::InputInteger("계좌번호 입력");

		int idx = IdToIdx(id);

		int money = MyInsert::InputInteger("출금할 금액 입력");

		Account* paccount = (Account*)accounts.getData(idx);
		paccount->MinBalance(money);

		printf("출금되었습니다.\n");
	}
	catch (const char* err) {
		cout << "출금 실패: ";
		cout << err << endl;
	}
}
void BankControl::DeleteAccount() {
	printf("계좌 삭제\n\n");

	try {
		int id = MyInsert::InputInteger("계좌번호 입력");

		int idx = IdToIdx(id);

		accounts.Erase(idx);

		printf("삭제되었습니다.\n");
	}
	catch (const char* err) {
		cout << "삭제 실패: ";
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

	throw "해당하는 계좌 정보가 없습니다.";
}