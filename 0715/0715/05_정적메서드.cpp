// Ŭ���������� ���� ������ �޼���
#include <iostream>
using namespace std;

// MyCal Ŭ������ ��ü�� ���� �ʿ䰡 ������?
// ������ �����Ͱ� ���� ������ ���� �ʿ� ����.
class MyCal {
public:
	static int sum(int n1, int n2) {
		return n1 + n2;
	}
	static int sub(int n1, int n2) {
		return n1 - n2;
	}
};

int main() {
	cout << MyCal::sum(10, 5) << endl;
	cout << MyCal::sub(10, 5) << endl;

	return 0;
}