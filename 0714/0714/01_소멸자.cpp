/*
������: ��ü�� [������ ��] �ڵ����� ȣ��Ǵ� Ư���� ������ �޼���
�Ҹ���: ��ü�� [�Ҹ�� ��] �ڵ����� ȣ��Ǵ� Ư���� ������ �޼���

��ü ����: 1) �޸� ���� 2) ������ ȣ��
��ü �Ҹ�: 1) �Ҹ��� ȣ�� 2) �޸� �Ҹ�
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
	Sample s1;						// ��ü ����: 8 byte �޸� ���� -> ������ ȣ��
	cout << sizeof(s1) << endl;		// 8

	Sample s2(10);

	return 0;
}