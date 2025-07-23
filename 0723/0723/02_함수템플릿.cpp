#include <iostream>
using namespace std;

// Ʋ�� �̿��� �Լ� 2���� �����Ϸ��� ���� ���ǵȴ�.
template <typename T1, typename T2>
T2 mySum(T1 n1, T2 n2) {
	return n1 + n2;
}

template <typename T1, typename T2, typename T3>
T3 mySub(T1 n1, T2 n2) {
	return n1 - n2;
}

int main() {
	// ���ø� ȣ�� 1) �Ͻ���(���� ���)
	cout << mySum(10, 20) << endl;			// T1 -> int, T2 -> int
	cout << mySum(10.1f, 20.2f) << endl;	// T1 -> float, T2 -> float
	cout << mySum(10, 10.1f) << endl;		// T1 -> int, T2 -> float

	// ���ø� ȣ�� 2) �����
	cout << mySum<int, int>(10, 20) << endl;
	cout << mySum<int, float>(10, 10.1f) << endl;

	// �Ͻ��� ������� �Ұ����� ��� �߻�
	// cout << mySub(10, 20) << endl;		// ���� Ÿ��: T3 ??
	cout << mySub<int, int, int>(10, 20) << endl;
	cout << mySub<int, float, float>(10, 10.1f) << endl;
	cout << mySub<float, int, float>(10.1f, 10) << endl;

	return 0;
}