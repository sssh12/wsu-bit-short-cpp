/*
값, 주소, 참조자
-> 값 전달	   : 객체 생성 O
-> 주소, 참조자: 객체 생성 X
객체 전달할 때는 주소나 참조자 전달을 사용한다.
*/
#include <iostream>
using namespace std;

class Sample {
public:
	Sample() {
		cout << "1. Sample()" << endl;
	}
	Sample(int n1) {
		cout << "2. Sample(int)" << endl;
	}
	Sample(const Sample& s) {
		cout << "3. Sample(Sample)" << endl;
	}
	~Sample() {
		cout << "a. ~Sample()" << endl;
	}
};

void func1(Sample s) {			// 객체 생성 O
}

void func2(Sample* s) {			// 객체 생성 X 원본 변경 목적으로 사용
}

void func3(const Sample& s) {	// 객체 생성 X 복사본 용도
}

int main() {
	Sample s1;

	func1(s1);	// 값 전달
	func2(&s1);	// 주소 전달
	func3(s1);	// 참조자 전달

	return 0;
}