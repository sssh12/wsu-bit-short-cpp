#include <iostream>
using namespace std;

// 틀을 이용해 함수 2개가 컴파일러에 의해 정의된다.
template <typename T>
T mySum(T n1, T n2) {
	return n1 + n2;
}

int main() {
	// int 전달	 : T -> int 변경해서 함수 생성
	cout << mySum(10, 20) << endl;

	// float 전달: T -> float 변경해서 함수 생성
	cout << mySum(10.1f, 20.2f) << endl;

	return 0;
}