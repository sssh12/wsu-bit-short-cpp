/*
��ü ����
1) �޸� ����(��� ������ ����� ���� ����, ��� �Լ� X)
2) ������ ȣ�� -> �ʱ�ȭ

* ��ü�� ������ �� [�����ڸ� ������ ������] �����Ϸ��� �ڵ����� �����ڸ� ������ش�.
* - ����Ʈ ������(���ڰ� ���� ������)�� ������ش�.
* - �ʱ�ȭ X
* ex) Sample() {	}
*/
#include <iostream>
using namespace std;

class Sample {
private:
	int num;

public:
	void Print() {
		cout << num << endl;
	}
};

class Sample1 {
private:
	int num;

public:
	Sample1(int _num) {
		num = _num;
	}

	void Print() {
		cout << num << endl;
	}
};

int main() {
	Sample s1;	// �޸� 4 byte s1.num

	s1.Print();

	Sample1 s2(1);	
	s2.Print();

	return 0;
}