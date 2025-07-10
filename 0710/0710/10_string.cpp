#include <iostream>
using namespace std;

int main() {
	// 대입 연산
	string str1 = "abcd";
	string str2;

	str2 = str1;

	if (str1 == str2) {	// 비교 연산
		cout << "동일" << endl;
	}
	else {
		cout << "다르다" << endl;
	}

	cout << "문자열 입력: "; cin >> str1;
	cout << "입력 결과: " << str1 << endl;

	return 0;
}