// ��ü�� �̿��ؼ� ��� �Լ��� ȣ���� �� �ڽ��� �ּҰ� ���޵ȴ�.
// �� �ּҸ� �����ϰ� �ִ� ������
#include <iostream>
using namespace std;

class Sample {
private:
	int num;

public:
	Sample(int num): num(num) {
		num = num;
		this->num = num; 
	}

public:
	void func1() {
		cout << this << endl;
	}
};

int main() {
	Sample s1(10);
	cout << &s1 << endl;
	s1.func1();		// func1(&s1);

	Sample s2(20);
	cout << &s2 << endl;
	s2.func1();

	return 0;
}