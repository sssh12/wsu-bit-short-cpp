#include <iostream>
using namespace std;

struct Sample {
private:
	int num1;
	int num2;

public:
	void Print() {
		cout << num1 << ", " << num2 << endl;
	}
};

int main() {
	// ��� ���� ����: ���� ���� �� �ʱ�ȭ ��� �Ұ�
	// Sample s1 = { 10, 20 };

	// s1.Print();					// 10, 20

	return 0;
}