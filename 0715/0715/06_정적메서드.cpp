// 04_��������ʵ� ����
// ���� ������ ����Ǿ 2026001���� ȸ�� ��ȣ�� �����ϰ� �ʹٸ�?
// ���� �޼��带 ���� ó������
#include <iostream>
using namespace std;

class Member {
private:
	static int s_number;	// Ŭ���� ���
	int number;
	string name;
	string phone;

public:
	Member(string _name, string _phone) :
		number(s_number), name(_name), phone(_phone) {
		s_number++;
	}

public:
	void Print() const {
		cout << number << ", " << name << ", " << phone << endl;
	}

	static void setSNumber(int _s_number) {
		s_number = _s_number;
	}
};

int Member::s_number = 2025001;

int main() {
	Member m1("������", "010-8343-7705");
	Member m2("������", "010-1234-5678");

	m1.Print();
	m2.Print();

	// 2026�⵵
	// Member::s_number = 2026001; // ������ ����
	// m2.setSNumber(2026001);
	Member::setSNumber(2026001);

	Member m3("�Ǽ���", "010-2222-3333");

	m3.Print();

	return 0;
}