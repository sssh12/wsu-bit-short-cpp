#include <iostream>
using namespace std;

float myDiv(int n1, int n2) {
	if (n2 == 0) {
		throw "0으로 나누지 마셈";
	} 
	else {
		return (float)n1 / n2;
	}
}

int main() {
	try {
		float result = myDiv(10, 0);
		cout << "연산 결과: " << result << endl;
	}
	catch (const char* error) {
		cout << error << endl;
	}

	return 0;
}