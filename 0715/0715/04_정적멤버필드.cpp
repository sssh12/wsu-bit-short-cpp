// �ν��Ͻ��� �����ϴ� ��� �ʵ�
#include <iostream>
using namespace std;

class Member {
private:
	static int s_number;	// Ŭ���� ���
	int number;
	string name;
	string phone;

public:
	Member(string _name, string _phone): 
		number(s_number), name(_name), phone(_phone) {
		s_number++;
	}

public:
	void Print() const {
		cout << number << ", " << name << ", " << phone << endl;
	}
};

int Member::s_number = 2025001;

int main() {
	Member m1("������", "010-8343-7705");
	Member m2("������", "010-1234-5678");

	m1.Print();
	m2.Print();

	return 0;
}