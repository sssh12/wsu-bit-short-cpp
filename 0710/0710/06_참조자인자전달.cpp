/*
�� ����(Call by value)		  :	����
�ּ� ����(Call by address)	  : ���� ���� ����
-----------------------------------------------------------------
������ ����(Call by reference): �ּ� ���ް� ������ ������ ���´�. 
*/
#include <iostream>
using namespace std;

void func1(int num1, int* pnum, int& num2);

/*
-------------------------------------
100����		num1		1 -> 20 -> 30
-------------------------------------
<main stack>
*/
int main() {
	int num = 1;
	func1(num, &num, num);	// ��(1), �ּ�, ��(num)

	return 0;
}

/*
-------------------------------------
204����		pnum		100����
200����		num1		1 -> 10
-------------------------------------
<func1 stack>
int num1 = 1;
int* pnum = 100����;
int& num2 = num;	// num2�� main �Լ��� �ִ� num�� ����
*/
void func1(int num1, int* pnum, int& num2) {		// num2: func1�� ����� �� �ִ� �ĺ���
	num1 = 10;
	*pnum = 20;	// main num ����
	num2 = 30;	// main num ����
}