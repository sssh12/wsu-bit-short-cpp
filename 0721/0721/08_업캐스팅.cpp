/*
�θ�* = &�ڽ�
*/
#include <iostream>
using namespace std;

class Parent {
public:
	void func1() {
		cout << "Parent::func1()" << endl;
	}
};

class Child: public Parent {
	// override(������)
public:
	void func1() {
		cout << "Child::func1()" << endl;
	}
};

int main() {
	Parent* p1;	// ��ü ���� X, Parent �ּ� ���� ����
	Child c1;	// �ڽ� ��ü ����

	p1 = &c1;	// ��ĳ���� (���� X, ���� ����ȯ �ʿ� ����.)
	
	// �Ϲ������� ���Ǵ� ��ĳ���� ����
	Parent* p2 = new Child;
	p2->func1();			// ����: Child::func1()
							// ����: Parent::func1()

	delete p2;

	return 0;
}