/*
C++에서 추가된 문법
	참조자(reference) == 별명
*/
#include <iostream>
using namespace std;

/*
----------------------------------------
104번지		num2(rnum)	20 -> 22 -> 33
100번지		num1		10 -> 30
----------------------------------------
<main stack>
*/
int main() {
	int num1 = 10;
	int num2 = 20;
	int& rnum = num2;	// rnum: 참조자(reference)
						// 누군가의 별명(반드시 선언과 동시에 대상 결정

	num1 = 30;

	num2 = 22;	
	
	cout << num2 << endl;	// 22
	cout << rnum << endl;	// 22

	rnum = 33;

	cout << num2 << endl;	// 33
	cout << rnum << endl;	// 33

	return 0;
}