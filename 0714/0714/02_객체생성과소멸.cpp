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
	// exam1�� ���� �޸𸮿� ��ü�� 1�� ����
	Sample s1;
	Sample s2(10);
	// �Լ��� ����� �� ���� �޸𸮰� �Ҹ�ǰ�, �� �� ������ ��ü�� �Ҹ�ȴ�.
}

void exam2() {
	// �� �޸𸮿� ��ü�� 1�� ����
	// exam2�� ���� �޸𸮿��� s1: s1�� �� �޸𸮿� ������ ��ü�� �ּҸ� ����
	Sample* s1 = new Sample;
	Sample* s2;
	s2 = new Sample(10);

	delete s1;
	delete s2;
}

void exam3() {
	// ���ÿ� ��ü 3�� ����
	Sample s1[3] = { Sample(10), Sample(20) };

	// ��ü 3�� �Ҹ�
}

void exam4() {
	Sample* s1[3];	// ��ü ���� X

	// �� �޸𸮿� �����ȴ�.
	s1[0] = new Sample;
	s1[1] = new Sample(10);
	s1[2] = new Sample(20);

	delete s1[0];
	delete s1[1];
	delete s1[2];
}