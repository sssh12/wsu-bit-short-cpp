/*
정수 2개를 인자로 받아서 합의 결과를 반환하는 함수
실수 2개를 인자로 받아서 합의 결과를 반환하는 함수
*/
#include <iostream>
using namespace std;

int mySum(int n1, int n2) {
	return n1 + n2;
}

float mySum(float fn1, float fn2) {
	return fn1 + fn2;
}

float mySum(int n1, int n2, int n3, float fn) {
	return n1 + n2 + n3 + fn;
}

int main() {
	cout << mySum(10, 20) << endl;				// cout << 30 << endl;
	cout << mySum(10.1f, 20.2f) << endl;		// cout << 30.3 << endl;
	cout << mySum(10, 20, 30, 10.1f) << endl;	// cout << 70.1 << endl;

	return 0;
}