#include <iostream>
using namespace std;

class Sample {
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

void exam1();
void exam2();
void exam3();
void exam4();

int main() {
	//exam1();
	//exam2();
	//exam3();
	exam3();

	return 0;
}

void exam1() {
	// exam1의 스택 메모리에 객체가 1개 생성
	Sample s1;
	Sample s2(10);
	// 함수가 종료될 때 스택 메모리가 소멸되고, 이 때 생성된 객체가 소멸된다.
}

void exam2() {
	// 힙 메모리에 객체가 1개 생성
	// exam2의 스택 메모리에는 s1: s1은 힙 메모리에 생성된 객체의 주소를 저장
	Sample* s1 = new Sample;
	Sample* s2;
	s2 = new Sample(10);

	delete s1;
	delete s2;
}

void exam3() {
	// 스택에 객체 3개 생성
	Sample s1[3] = { Sample(10), Sample(20) };

	// 객체 3개 소멸
}

void exam4() {
	Sample* s1[3];	// 객체 생성 X

	// 힙 메모리에 생성된다.
	s1[0] = new Sample;
	s1[1] = new Sample(10);
	s1[2] = new Sample(20);

	delete s1[0];
	delete s1[1];
	delete s1[2];
}