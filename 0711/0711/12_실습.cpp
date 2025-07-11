/*
ȸ��(Memb) ��ü ����
- �̸�, ����, ��ȭ ��ȣ

����: ��� �ʵ�(������) -> ������ -> ��� �޼���
*/
#include <iostream>
using namespace std;

class Memb {
private:
	string name;
	int age;
	string phone;

public:
	Memb(string _name) {
		name = _name;
		age = 0;
		phone = "";
	}

	Memb(string _name, int _age, string _phone) {
		name = _name;
		age = _age;
		phone = _phone;
	}

	// set �޼���(Ư�� ��� �ʵ��� ���� ����)
public:
	void setAge(int _age) {
		age = _age;
	}

	void setPhone(string _phone) {
		phone = _phone;
	}

public:
	void Print() {
		cout << "�̸�     : " << name << endl;
		cout << "����     : " << age << endl;
		cout << "��ȭ ��ȣ: " << phone << endl;
	}
};

int main() {
	Memb mem1("������", 26, "010-8343-7705");
	Memb mem2("������");

	mem1.setAge(20);

	mem2.setAge(80);
	mem2.setPhone("010-7777-6666");

	mem1.Print();
	mem2.Print();


	return 0;
}