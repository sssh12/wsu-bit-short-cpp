/*
�˻� �Լ��� �Ϲ�ȭ
ũ�Ⱑ �޶� ó�� ����: ����[������ ~ ����], ����(����), ����(������)
Ÿ���� �޶� ó�� ����: template
*/
#include <iostream>
using namespace std;

/*
double* myFind(double* start, double* end, double value) {
	for (	; start != end; start++) {
		if (*start == value) {
			return start;
		}
	}
	return start;	// end;
}
*/

template <typename T1, typename T2>
T1 myFind(T1 start, T1 end, T2 value) {
	for (; start != end; start++) {
		if (*start == value) {
			return start;
		}
	}
	return start;	// end;
}

int main() {
	// �迭 ũ�Ⱑ �ٸ���, ���� ������ �ٸ���.
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	double arr2[4] = { 1.1, 2.2, 3.3, 4.4 };
	char arr3[5] = { 'a', 'b', 'c', 'd', 'e' };

	int* ret1 = myFind(arr1, arr1 + 6, 6);
	if (ret1 != arr1 + 4) {
		cout << *ret1 << endl;
	}
	else {
		cout << "����" << endl;
	}

	double* ret2 = myFind(arr2, arr2 + 4, 4.4);
	if (ret2 != arr2 + 4) {
		cout << *ret2 << endl;
	} 
	else {
		cout << "����" << endl;
	}

	return 0;
}