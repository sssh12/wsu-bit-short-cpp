#include <iostream>
using namespace std;

float myDiv(int n1, int n2) {
	if (n2 == 0) {
		throw "0���� ������ ����";
	} 
	else {
		return (float)n1 / n2;
	}
}

int main() {
	try {
		float result = myDiv(10, 0);
		cout << "���� ���: " << result << endl;
	}
	catch (const char* error) {
		cout << error << endl;
	}

	return 0;
}