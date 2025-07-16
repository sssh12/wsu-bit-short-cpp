#include <iostream>
using namespace std;

class Sample {
private:
	char* name;		// ���ڿ� �迭
	int age;

public:
	Sample(const char* _name, int _age): age(_age) {
		name = new char[strlen(_name) + 1];
		strcpy_s(name, strlen(_name) + 1, _name);
	}
	~Sample() {
		delete[] name;	// ****
	}

public:
	void Print() {
		cout << name << ", " << age << endl;
	}
};

int main() {
	Sample s1("������", 26);
	Sample s2(s1);		// �����Ϸ��� �������ִ� ���� ������ ȣ��
	s1.Print();

	return 0;
}