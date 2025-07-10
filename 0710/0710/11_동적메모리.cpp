/*
C ���	: malloc()	 / free() �Լ�
C++ ���: new ������ / delete ������
*/
#include <iostream>
using namespace std;

void exam1();
void exam2();

int main() {
	//exam1();
	exam2();

	return 0;
}

void exam1() {
	int* p1 = (int*)malloc(sizeof(int));	// �� �޸𸮿� ���� 1�� ���� ���� ����

	*p1 = 10;

	free(p1);	// �޸� ����

	// ------------------------------------------------------------------------------------

	int* p2 = new int;						// �� �޸𸮿� ���� 1�� ���� ���� ����

	*p2 = 10;

	delete p2;	// �޸� ����
}

void exam2() {
	int* p1 = new int;		// int 1��, ���� ��
	int* p2 = new int(3);	// int 1��, 3���� �ʱ�ȭ
	int* p3 = new int[3];	// int 3��, ���� ��, ���� �迭

	cout << *p1 << endl;	// ���� ��
	cout << *p2 << endl;	// 3
	
	p3[0] = 1;
	p3[1] = 2;
	p3[2] = 3;

	// �����Ϸ��� p1�� Ÿ���� ���������� �߿��ϴ� !!
	delete p1;		// 4 byte ����
	delete p2;		// 4 byte ����
	//delete p3;	// 4 byte ���� ?? ��� X
	delete[] p3;	// 12 byte ����   ��� O
}