/*
�ڽ� ��ü ����: �θ� ���� -> �ڽ� ����
				������ ��� ������ -> �ڽ� ��ü��� �Ѵ�.
				���� �������� ����� ���������.
�ڽ� ��ü �Ҹ�: �ڽ� �Ҹ� -> �θ� �Ҹ�
*/
#include <iostream>
using namespace std;

class Parent {
public:
	Parent() {
		cout << "Parent::Parent()" << endl;
	};
	Parent(int num1) {
		cout << "Parent::Parent(int)" << endl;
	};
	~Parent() {
		cout << "Parent::~Parent()" << endl;
	};
};

class Child : public Parent {
public:
	// ���� ȣ��Ǵ� �߿��� ����
	// �ڽ��� �ݷ� �ʱ�ȭ ���� üũ
	// �����Ϸ��� �θ��� � �����ڸ� ȣ���ϴ� �ڵ尡 �ִ��� Ȯ��
	// ����, ������ �θ��� ���ڰ� ���� ����Ʈ �����ڰ� ȣ��ȴ�.
	Child(): Parent(10) {	// *****
		cout << "Child::Child()" << endl;
	};
	~Child() {
		cout << "Child::~Child()" << endl;
	};
};

int main() {
	Child c;	// �ڽ� ��ü ����

	return 0;
}