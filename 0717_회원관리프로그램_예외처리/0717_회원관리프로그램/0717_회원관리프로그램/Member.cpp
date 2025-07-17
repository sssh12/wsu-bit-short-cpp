#include "std.h"

Member::Member(string _name, int _age, string _phone):
		name(_name), age(_age), phone(_phone) {
	}
Member::~Member() {
}

// get & set 메서드
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
	age = _age;
}

void Member::setPhone(string _phone) {
	phone = _phone;
}

// 기능 메서드
void Member::PrintLn() const {
	cout << "[이    름]: " << name << endl;
	cout << "[나    이]: " << age << endl;
	cout << "[전화번호]: " << phone << endl;
}

void Member::Print() const {
	cout << "이름: " << name << "\t" << "나이: " << age;
	cout << "\t" << "전화번호: " << phone << endl;
}