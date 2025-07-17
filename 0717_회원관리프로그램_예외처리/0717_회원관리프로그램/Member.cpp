#include "std.h"

Member::Member(string _name, int _age, string _phone):
		name(_name), age(_age), phone(_phone) {
	}
Member::~Member() {
}

// get & set �޼���
string Member::getName() const {
	return name;
}

int Member::getAge() const {
	return age;
}
string Member::getPhone() const {
	return phone;
}

void Member::setAge(int _age) {
	if (_age <= 0) {
		throw "�߸��� ���̰� �ԷµǾ����ϴ�.";
	}
	age = _age;
}

void Member::setPhone(string _phone) {
	phone = _phone;
}

// ��� �޼���
void Member::PrintLn() const {
	cout << "[��    ��]: " << name << endl;
	cout << "[��    ��]: " << age << endl;
	cout << "[��ȭ��ȣ]: " << phone << endl;
}

void Member::Print() const {
	cout << "�̸�: " << name << "\t" << "����: " << age;
	cout << "\t" << "��ȭ��ȣ: " << phone << endl;
}