/*
�Ű� ������ ���޵� ���� �̸� ������ �д�.
void func1(int n1, int n2);			// ȣ�� �� �ݵ�� ���� 2�� ���ڷ� ����
									   func1(1, 2);
void func2(int n1, int n2 = 10);	// func2(1, 2); -> int n1 = 1; int n2 = 2;
									   func2(1);	-> int n1 = 1; int n2 = 10;
*/
#include <iostream>
using namespace std;

int func1(int n1, int n2 = 0, int n3 = 0, int n4 = 0) {
	return n1 + n2 + n3 + n4;
}

// ����
// �Լ� ȣ��: mySub(1, 2, 3, 4);	// 1: ù��° �Ű� ���� ����
// �⺻���� �ݵ�� �Ű� ���� �ڿ������� ������
/*
int mySub(int n1 = 0, int n2, int n3, int n4) {

}
*/

int main() {
	cout << func1(1, 2, 3, 4) << endl;	// 10
	cout << func1(1, 2, 3) << endl;		// 6
	cout << func1(1) << endl;			// 1

	return 0;
}