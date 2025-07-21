/*
�θ�κ��� �������� �޼��带 �ڽ��� ������
*/
#include <iostream>
using namespace std;

class Person {
private:
	string name;	// �̸�
	int age;		// ����

public:
	Person(string _name, int _age) : name(_name), age(_age) {
	}

public:
	void Print() const {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
};

class Student: public Person {
private:
	string major;	// �а�
	int number;		// �г�

public:
	Student(string _name, int _age, string _major, int _number) :
		Person(_name, _age), major(_major), number(_number) {
		// name = _name;		// private
		// age = _age;			// private
		// major = _major;		// OK
		// number = _number;	// OK
	}

public:
	// �������̵�(��� �Լ� ������)
	void Print() const {
	
	}
};

int main() {
	Student stu1("ȫ�浿", 20, "��ǻ�ͼ���Ʈ����", 3);
	// stu1�� �� 2���� �޼��带 ���� �ִ�.
	// �������̵��� �ص� �����޴´�.
	stu1.Person::Print();		// Person Ŭ������ Print
	stu1.Print();				// Student Ŭ������ Print

	return 0;
}