#include "std.h"

MyCon::MyCon() {
	MyFile::Load(&members);
}
MyCon::~MyCon() {
	MyFile::Save(members);
}

void MyCon::InsertMember() {
	printf("[insert]\n\n");

	try {
		string name = MyInput::InputString("�̸� �Է�");
		int age = MyInput::InputInteger("���� �Է�");
		string phone = MyInput::InputString("��ȭ��ȣ �Է�");

		Member* member = new Member(name, age, phone);


		members.PushBack(member);
		printf("����Ǿ����ϴ�.\n");
	}
	catch (const char* err) {
		cout << err << endl;
	}
}
void MyCon::SelectMember() {
	printf("[select]\n\n");

	try {
		string name = MyInput::InputString("�̸� �Է�");

		int idx = NameToIdx(name);

		Member* pmember = (Member*)members.getData(idx);
		pmember->PrintLn();
	}
	catch (const char* err) {
		cout << "�˻� ����: ";
		cout << err << endl;
	}
}

void MyCon::UpdateMember() {
	printf("[update]\n\n");

	try {
		string name = MyInput::InputString("�̸� �Է�");

		int idx = NameToIdx(name);

		int age = MyInput::InputInteger("������ ����");
		string phone = MyInput::InputString("������ ��ȭ��ȣ");

		Member* pmember = (Member*)members.getData(idx);
		pmember->setAge(age);
		pmember->setPhone(phone);

		printf("����Ǿ����ϴ�.\n");
	}
	catch (const char* err) {
		cout << "���� ����: ";
		cout << err << endl;
	}
}
	
void MyCon::DeleteMember() {
	printf("[delete]\n\n");

	try {
		string name = MyInput::InputString("�̸� �Է�");

		int idx = NameToIdx(name);

		members.Erase(idx);

		printf("�����Ǿ����ϴ�.\n");
	}
	catch (const char* err) {
		cout << "���� ����: ";
		cout << err << endl;
	}
}

void MyCon::PrintAll() {
	for (int i = 0; i < members.getSize(); i++) {
		printf("[%d] ", i);
		Member* pmember = (Member*)members.getData(i);
		pmember->Print();
	}
	printf("------------------------------------------------------------------------\n");
}

int MyCon::NameToIdx(string name) {
	for (int i = 0; i < members.getSize(); i++) {
		Member* member = (Member*)members.getData(i);

		if (member->getName() == name) {
			return i;
		}
	}

	throw "�ش��ϴ� ȸ�� ������ �����ϴ�.";
}