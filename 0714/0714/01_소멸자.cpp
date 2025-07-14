/*
생성자: 객체가 [생성될 때] 자동으로 호출되는 특수한 형태의 메서드
소멸자: 객체가 [소멸될 때] 자동으로 호출되는 특수한 형태의 메서드

객체 생성: 1) 메모리 생성 2) 생성자 호출
객체 소멸: 1) 소멸자 호출 2) 메모리 소멸
*/
#include <iostream>
using namespace std;

class Sample {
private:
	int n1;
	int n2;

public:
	Sample() {
		cout << "Sample()" << endl;
	}
	Sample(int n) {
		cout << "Sample(int n)" << endl;
	}
	~Sample() {
		cout << "~Sample()" << endl;
	}
};

int main() {
	Sample s1;						// 객체 생성: 8 byte 메모리 생성 -> 생성자 호출
	cout << sizeof(s1) << endl;		// 8

	Sample s2(10);

	return 0;
}