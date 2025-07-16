#include <iostream>
using namespace std;

class Member {
private:
	int id;
	string name;
	char gender;

public:
	Member(int _id, string _name, char _gender): id(_id), name(_name), gender(_gender) {
	}

	// ��ȯ ������
public:
	operator int() const {		// ��ü�� int�� ��ȯ�ϰڴ�.
		return id;
	}

	operator string() const {	// ��ü�� string���� ��ȯ�ϰڴ�.
		return name;
	}

	operator char() const {		// ��ü�� char�� ��ȯ�ϰڴ�.
		return gender;
	}
};

void exam1() {
	Member mem(10, "ȫ�浿", 'm');

	int id = mem;

	string name = mem;

	char gender = mem;

	cout << id << ", " << name << ", " << gender << endl;
}

int InputInteger(string msg) {
	int value;
	
	while (1) {
		cout << msg << ": ";
		cin >> value;

		if (cin) {			// �ڽ��� ���� ������ ��ȯ(���� �Է�)
			return value;
		}
		else {
			cin.clear();	// �ʱ� ���·�
			cin.ignore();	// ���� ���� 1�� ����
		}
	}
	
}

void exam2() {
	int number = InputInteger("���� �Է�");
	cout << "�Է� ���: " << number << endl;
}

int main() {
	//exam1();
	exam2();

	return 0;
}