/*
������ ����: [�ڽ���] ��� �ʵ带 �ʱ�ȭ
 - �ڽ��� �θ��� ��� �ʵ带 �ʱ�ȭ �� �� ����.
 - �ڽ��� �θ��� � �����ڸ� ȣ���ϸ鼭 �ʱ�ȭ �� �� �������ش�.
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
};

int main() {
	// Student Ŭ������ ���ڸ� 4�� �޴� �����ڰ� �ʿ��ϴ�.
	Student stu1("ȫ�浿", 20, "��ǻ�ͼ���Ʈ����", 3);


	return 0;
}