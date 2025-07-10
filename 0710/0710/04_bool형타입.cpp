/*
int:			정수 -1, 0, 1
char:			문자 'A'
float / double: 실수 10.1f / 10.1;
--------------------------------------
bool:			불	 true(1), false(0)
*/
#include <iostream>
using namespace std;

int main() {
	// 가독성
	bool b1 = true;		cout << b1 << endl;	// 1
	b1 = false;			cout << b1 << endl;	// 0

	// bool은 0과 1만 표현된다.
	b1 = 1;				cout << b1 << endl;	// 1
	//b1 = 100;			cout << b1 << endl;	// 1 워닝 발생

	return 0;
}