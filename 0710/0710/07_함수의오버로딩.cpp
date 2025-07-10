/*
float func1(int n1, char ch);
--------------------------------------------------------
리턴 타입	   : float
함수명		   : func1
매개 변수	   : int n1, char ch
--------------------------------------------------------
메서드명	   : (함수명 + 매개 변수)

C 언어         : 함수 식별 -> 함수명
C++ 언어	   : 함수 식별 -> 메서드명
함수의 오버로딩: 함수의 이름이 같지만, 매개 변수가 다른 함수들의 관계
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