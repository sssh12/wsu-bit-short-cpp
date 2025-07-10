/*
C++���� �߰��� ����
	������(reference) == ����
*/
#include <iostream>
using namespace std;

/*
----------------------------------------
104����		num2(rnum)	20 -> 22 -> 33
100����		num1		10 -> 30
----------------------------------------
<main stack>
*/
int main() {
	int num1 = 10;
	int num2 = 20;
	int& rnum = num2;	// rnum: ������(reference)
						// �������� ����(�ݵ�� ����� ���ÿ� ��� ����

	num1 = 30;

	num2 = 22;	
	
	cout << num2 << endl;	// 22
	cout << rnum << endl;	// 22

	rnum = 33;

	cout << num2 << endl;	// 33
	cout << rnum << endl;	// 33

	return 0;
}