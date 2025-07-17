#include "std.h"

MyCon::MyCon() {
	MyFile::Load(&members);
}
MyCon::~MyCon() {
	MyFile::Save(members);
}

void MyCon::InsertMember() {
	printf("[insert]\n\n");

	string name = MyInput::InputString("�̸� �Է�");
	int age = MyInput::InputInteger("���� �Է�");
	string phone = MyInput::InputString("��ȭ��ȣ �Է�");

	Member* member = new Member(name, age, phone);

	if (members.PushBack(member)) {	// *****
		printf("����Ǿ����ϴ�.\n");
	}
	else {
		printf("���� ����(overflow)\n");
	}
}
void MyCon::SelectMember() {
	printf("[select]\n\n");

	string name = MyInput::InputString("�̸� �Է�");

	int idx = NameToIdx(name);

	if (idx != -1) {
		Member* pmember = (Member*)members.getData(idx);

		pmember->PrintLn();
	}
	else {
		printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
	}
}

void MyCon::UpdateMember() {
	printf("[update]\n\n");

	string name = MyInput::InputString("�̸� �Է�");

	int idx = NameToIdx(name);

	if (idx != -1) {
		int age = MyInput::InputInteger("������ ����");
		string phone = MyInput::InputString("������ ��ȭ��ȣ");

		Member* pmember = (Member*)members.getData(idx);
		pmember->setAge(age);
		pmember->setPhone(phone);

		printf("����Ǿ����ϴ�.\n");
	}
	else {
		printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
	}
}
	
void MyCon::DeleteMember() {
	printf("[delete]\n\n");

	string name = MyInput::InputString("�̸� �Է�");

	int idx = NameToIdx(name);

	if (idx != -1) {
		members.Erase(idx);

		printf("�����Ǿ����ϴ�.\n");
	}
	else {
		printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
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
	return -1;
}