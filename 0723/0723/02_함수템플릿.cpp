#include <iostream>
using namespace std;

// 틀을 이용해 함수 2개가 컴파일러에 의해 정의된다.
template <typename T1, typename T2>
T2 mySum(T1 n1, T2 n2) {
	return n1 + n2;
}

template <typename T1, typename T2, typename T3>
T3 mySub(T1 n1, T2 n2) {
	return n1 - n2;
}

int main() {
	// 템플릿 호출 1) 암시적(많이 사용)
	cout << mySum(10, 20) << endl;			// T1 -> int, T2 -> int
	cout << mySum(10.1f, 20.2f) << endl;	// T1 -> float, T2 -> float
	cout << mySum(10, 10.1f) << endl;		// T1 -> int, T2 -> float

	// 템플릿 호출 2) 명시적
	cout << mySum<int, int>(10, 20) << endl;
	cout << mySum<int, float>(10, 10.1f) << endl;

	// 암시적 방식으로 불가능한 경우 발생
	// cout << mySub(10, 20) << endl;		// 리턴 타입: T3 ??
	cout << mySub<int, int, int>(10, 20) << endl;
	cout << mySub<int, float, float>(10, 10.1f) << endl;
	cout << mySub<float, int, float>(10.1f, 10) << endl;

	return 0;
}