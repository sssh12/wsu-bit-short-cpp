#include <iostream>
using namespace std;

// Ʋ�� �̿��� �Լ� 2���� �����Ϸ��� ���� ���ǵȴ�.
template <typename T>
T mySum(T n1, T n2) {
	return n1 + n2;
}

int main() {
	// int ����	 : T -> int �����ؼ� �Լ� ����
	cout << mySum(10, 20) << endl;

	// float ����: T -> float �����ؼ� �Լ� ����
	cout << mySum(10.1f, 20.2f) << endl;

	return 0;
}