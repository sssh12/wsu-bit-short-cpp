// ��� ��� �ʵ�� �ݵ�� ������ �ݷ� �ʱ�ȭ �������� �ʱ�ȭ�ؾ��Ѵ�.
#include <iostream>
using namespace std;

class Student {
private:
	const int id;		// ��� ��� �ʵ�
	string name;

public:
	Student(int _id, string _name): id(_id), name(_name) {
		// id = _id;
		// name = _name;
	}

public:
	void func1() {
		// id = 10;	// ��� ��� �ʵ�� ���� ������ �Ұ��ϴ�.
	}
};

int main() {
	return 0;
}