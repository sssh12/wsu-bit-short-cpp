/*
float func1(int n1, char ch);
--------------------------------------------------------
���� Ÿ��	   : float
�Լ���		   : func1
�Ű� ����	   : int n1, char ch
--------------------------------------------------------
�޼����	   : (�Լ��� + �Ű� ����)

C ���         : �Լ� �ĺ� -> �Լ���
C++ ���	   : �Լ� �ĺ� -> �޼����
�Լ��� �����ε�: �Լ��� �̸��� ������, �Ű� ������ �ٸ� �Լ����� ����
*/
#include <iostream>
using namespace std;

void func1()			   { cout << "func1" << endl; }
void func1(int n1, int n2) { cout << "func1(int, int)" << endl; }

int main() {
	func1();		// line 17
	func1(1, 2);	// line 18

	return 0;
}