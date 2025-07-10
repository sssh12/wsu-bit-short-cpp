/*
값 전달(Call by value)		  :	복사
주소 전달(Call by address)	  : 원본 접근 가능
-----------------------------------------------------------------
참조자 전달(Call by reference): 주소 전달과 동일한 성질을 갖는다. 
*/
#include <iostream>
using namespace std;

void func1(int num1, int* pnum, int& num2);

/*
-------------------------------------
100번지		num1		1 -> 20 -> 30
-------------------------------------
<main stack>
*/
int main() {
	int num = 1;
	func1(num, &num, num);	// 값(1), 주소, 값(num)

	return 0;
}

/*
-------------------------------------
204번지		pnum		100번지
200번지		num1		1 -> 10
-------------------------------------
<func1 stack>
int num1 = 1;
int* pnum = 100번지;
int& num2 = num;	// num2는 main 함수에 있는 num의 별명
*/
void func1(int num1, int* pnum, int& num2) {		// num2: func1이 사용할 수 있는 식별자
	num1 = 10;
	*pnum = 20;	// main num 변경
	num2 = 30;	// main num 변경
}