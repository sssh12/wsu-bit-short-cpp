#include <iostream>
using namespace std;

int main() {
	// ���� ����
	string str1 = "abcd";
	string str2;

	str2 = str1;

	if (str1 == str2) {	// �� ����
		cout << "����" << endl;
	}
	else {
		cout << "�ٸ���" << endl;
	}

	cout << "���ڿ� �Է�: "; cin >> str1;
	cout << "�Է� ���: " << str1 << endl;

	return 0;
}