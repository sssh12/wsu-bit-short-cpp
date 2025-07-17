#include "std.h"

MyCon::MyCon() {
	MyFile::Load(&members);
}
MyCon::~MyCon() {
	MyFile::Save(members);
}

void MyCon::InsertMember() {
	printf("[insert]\n\n");

	string name = MyInput::InputString("이름 입력");
	int age = MyInput::InputInteger("나이 입력");
	string phone = MyInput::InputString("전화번호 입력");

	Member* member = new Member(name, age, phone);

	if (members.PushBack(member)) {	// *****
		printf("저장되었습니다.\n");
	}
	else {
		printf("저장 실패(overflow)\n");
	}
}
void MyCon::SelectMember() {
	printf("[select]\n\n");

	string name = MyInput::InputString("이름 입력");

	int idx = NameToIdx(name);

	if (idx != -1) {
		Member* pmember = (Member*)members.getData(idx);

		pmember->PrintLn();
	}
	else {
		printf("해당하는 회원 정보가 없습니다\n");
	}
}

void MyCon::UpdateMember() {
	printf("[update]\n\n");

	string name = MyInput::InputString("이름 입력");

	int idx = NameToIdx(name);

	if (idx != -1) {
		int age = MyInput::InputInteger("변경할 나이");
		string phone = MyInput::InputString("변경할 전화번호");

		Member* pmember = (Member*)members.getData(idx);
		pmember->setAge(age);
		pmember->setPhone(phone);

		printf("변경되었습니다.\n");
	}
	else {
		printf("해당하는 회원 정보가 없습니다\n");
	}
}
	
void MyCon::DeleteMember() {
	printf("[delete]\n\n");

	string name = MyInput::InputString("이름 입력");

	int idx = NameToIdx(name);

	if (idx != -1) {
		members.Erase(idx);

		printf("삭제되었습니다.\n");
	}
	else {
		printf("해당하는 회원 정보가 없습니다\n");
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