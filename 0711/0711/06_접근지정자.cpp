/*
private	 : ��ü ���ο����� ���� ���� 
protected: ��ü ���� + �ڽı��� ���� ����
public	 : ������(��ü ��/�ܺ�) ���� ����

struct�� �⺻�� public
*/
#include <iostream>
using namespace std;

struct Sample {
	int n1;
private:
	int n2;
	int n3;

public:
	void func1() {
		n1 = 1;
		n2 = 2;	// private
		n3 = 3;	// private
	}

	void func2() {
		func1();
	}
};

int main() {
	Sample s1;

	s1.func1();
	// s1.n2 = 1 // ����

	return 0;
}