/*
매개 변수에 전달된 값을 미리 정의해 둔다.
void func1(int n1, int n2);			// 호출 시 반드시 정수 2개 인자로 전달
									   func1(1, 2);
void func2(int n1, int n2 = 10);	// func2(1, 2); -> int n1 = 1; int n2 = 2;
									   func2(1);	-> int n1 = 1; int n2 = 10;
*/
#include <iostream>
using namespace std;

int func1(int n1, int n2 = 0, int n3 = 0, int n4 = 0) {
	return n1 + n2 + n3 + n4;
}

// 에러
// 함수 호출: mySub(1, 2, 3, 4);	// 1: 첫번째 매개 변수 전달
// 기본값은 반드시 매개 변수 뒤에서부터 앞으로
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