// ���� ������: ������ ��ü�� ��ü�� ������ �� �ڵ����� ȣ��
// �����Ϸ��� �������ִ� ���� �����ڴ� ���� ���縦 ���ش�.
#include <iostream>
using namespace std;

class Sample {
private:
	int number;
	string str;

public:
	Sample(): number(-1), str("-") {
		cout << "1. Sample()" << endl;
	}
	Sample(int _number, string _str): number(_number), str(_str) {
		cout << "2. Sample(int n1)" << endl;
	}
	~Sample() {
		cout << "3. ~Sample()" << endl;
	}

public:
	void Print() const {
		cout << number << ", " << str << endl;
	}
};

int main() {
	Sample s1;
	Sample s2(10, "���ڿ�");

	Sample s3(s1);	// ���� ������ ȣ���(�����Ϸ��� ������ ������ش�.)
	Sample s4 = s2;	// ���� ������ ȣ���

	s1.Print();
	s2.Print();
	s3.Print();
	s4.Print();
	

	return 0;
}