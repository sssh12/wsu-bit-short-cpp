// �θ�� �ڽ� ���� ����(is a) A-�ڽ��� B-�θ��̴�, B-�θ�� A-�ڽ��� �ƴϴ�.
// ����(�ڽ�)�� ����(�θ�)�̴�.
// ����(�θ�)�� ����(�ڽ�)�� �ƴϴ�.
// �ڽ��� �θ��� ����� �����޴´�.
#include <iostream>
using namespace std;

// �ڽ��� �θ��� ����� �����޴´�.
class Parent {
	int num1;

public:
	void parent_func1() {
		cout << "Parent::func1()" << endl;
	}
};

// �����ް�(��� �ʵ� 1��, ��� �޼��� 1��) 
// + Ȯ��(��� �ʵ� 1�� �߰�, ��� �޼��� 1�� �߰�)
class Child: public Parent 
{
	int num2;

public:
	void child_func1() {
		cout << "Child::func1()" << endl;
	}
};

int main() {
	Child c1;
	cout << "Child �޸� ũ��: " << sizeof(Child) << " byte" << endl;
	cout << "Child �޸� ũ��: " << sizeof(c1) << " byte" << endl;

	c1.child_func1();
	c1.parent_func1();

	return 0;
}