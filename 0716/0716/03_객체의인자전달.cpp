/*
��, �ּ�, ������
-> �� ����	   : ��ü ���� O
-> �ּ�, ������: ��ü ���� X
��ü ������ ���� �ּҳ� ������ ������ ����Ѵ�.
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

void func1(Sample s) {			// ��ü ���� O
}

void func2(Sample* s) {			// ��ü ���� X ���� ���� �������� ���
}

void func3(const Sample& s) {	// ��ü ���� X ���纻 �뵵
}

int main() {
	Sample s1;

	func1(s1);	// �� ����
	func2(&s1);	// �ּ� ����
	func3(s1);	// ������ ����

	return 0;
}