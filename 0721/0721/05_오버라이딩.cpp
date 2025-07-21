/*
�θ�κ��� �������� �޼��带 �ڽ��� ������
�ڽ��� Print�� �� ������ ������?
- �θ��� Print: �̸�, ���̸� ���
	������ �ڽ��� ��� ������ 4���̴�.
*/
#include <iostream>
using namespace std;

class Person {
// private:
protected:			// ���� + �ڽ�
	string name;	// �̸�
	int age;		// ����

public:
	Person(string _name, int _age) : name(_name), age(_age) {
	}

public:
	void Print1() const {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	void Print2() const {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
};

class Student : public Person {
private:
	string major;	// �а�
	int number;		// �й�

public:
	Student(string _name, int _age, string _major, int _number):
		Person(_name, _age), major(_major), number(_number) {
		// name = _name;		// private
		// age = _age;			// private
		// major = _major;		// OK
		// number = _number;	// OK
	}

public:
	// �������̵�(��� �Լ� ������)
	// 1 ���: 4�� ���
	//		   �θ��� ��� �ʵ带 �ڽ��� �����ϵ��� ���(protected)
	void Print1() const {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
		cout << "�а�: " << major << endl;
		cout << "�г�: " << number << endl;
	}

	// 2 ���: 4�� ���(����)
	void Print2() const {
		// �θ�κ��� �������� private ��� �̸�, ����?
		Person::Print2();
		cout << "�а�: " << major << endl;
		cout << "�г�: " << number << endl;
	}
};

int main() {
	Student stu1("ȫ�浿", 20, "��ǻ�ͼ���Ʈ����", 3);
	// stu1.Print1();
	stu1.Print2();
	
	return 0;
}