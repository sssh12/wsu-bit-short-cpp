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
		string name = MyInput::InputString("이름 입력");
		int age = MyInput::InputInteger("나이 입력");
		string phone = MyInput::InputString("전화번호 입력");

		Member* member = new Member(name, age, phone);


		members.PushBack(member);
		printf("저장되었습니다.\n");
	}
	catch (const char* err) {
		cout << err << endl;
	}
}
void MyCon::SelectMember() {
	printf("[select]\n\n");

	try {
		string name = MyInput::InputString("이름 입력");

		int idx = NameToIdx(name);

		Member* pmember = (Member*)members.getData(idx);
		pmember->PrintLn();
	}
	catch (const char* err) {
		cout << "검색 실패: ";
		cout << err << endl;
	}
}

void MyCon::UpdateMember() {
	printf("[update]\n\n");

	try {
		string name = MyInput::InputString("이름 입력");

		int idx = NameToIdx(name);

		int age = MyInput::InputInteger("변경할 나이");
		string phone = MyInput::InputString("변경할 전화번호");

		Member* pmember = (Member*)members.getData(idx);
		pmember->setAge(age);
		pmember->setPhone(phone);

		printf("변경되었습니다.\n");
	}
	catch (const char* err) {
		cout << "수정 실패: ";
		cout << err << endl;
	}
}
	
void MyCon::DeleteMember() {
	printf("[delete]\n\n");

	try {
		string name = MyInput::InputString("이름 입력");

		int idx = NameToIdx(name);

		members.Erase(idx);

		printf("삭제되었습니다.\n");
	}
	catch (const char* err) {
		cout << "삭제 실패: ";
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

	throw "해당하는 회원 정보가 없습니다.";
}