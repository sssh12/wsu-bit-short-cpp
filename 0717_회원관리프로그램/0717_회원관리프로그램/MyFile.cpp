#include "std.h"

string MyFile::fileName = "members.txt";

void MyFile::Load(MyArr* pmembers) {
	ifstream is(fileName);	// ������ fileopen, "r"

	// ���� ����
	int size;
	is >> size;

	for (int i = 0; i < size; i++) {
		string name;
		is >> name;

		int age;
		is >> age;

		string phone;
		is >> phone;

		Member* pmember = new Member(name, age, phone);
		pmembers->PushBack(pmember);
	}
}

void MyFile::Save(MyArr& members) {
	ofstream os(fileName);	// ������ fileopen, "w"

	// ���� ���� ����
	os << members.getSize() << endl;

	for (int i = 0; i < members.getSize(); i++) {
		Member* pmember = (Member*)members.getData(i);
		os << pmember->getName() << "\t";
		os << pmember->getAge() << "\t";
		os << pmember->getPhone() << endl;
	}

	os.close();				// fileclose
}
