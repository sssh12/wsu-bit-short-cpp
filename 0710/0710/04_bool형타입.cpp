/*
int:			���� -1, 0, 1
char:			���� 'A'
float / double: �Ǽ� 10.1f / 10.1;
--------------------------------------
bool:			��	 true(1), false(0)
*/
#include <iostream>
using namespace std;

int main() {
	// ������
	bool b1 = true;		cout << b1 << endl;	// 1
	b1 = false;			cout << b1 << endl;	// 0

	// bool�� 0�� 1�� ǥ���ȴ�.
	b1 = 1;				cout << b1 << endl;	// 1
	//b1 = 100;			cout << b1 << endl;	// 1 ���� �߻�

	return 0;
}