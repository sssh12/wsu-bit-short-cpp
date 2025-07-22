#include "std.h"

int MyInsert::InputInteger(string msg) {
	int value;
	cout << msg << ": ";
	cin >> value;
	return value;
}

float MyInsert::InputFloat(string msg) {
	float value;
	cout << msg << ": ";
	cin >> value;
	return value;
}

char MyInsert::InputChar(string msg) {
	char value;
	cout << msg << ": ";
	cin >> value;
	return value;
}

string MyInsert::InputString(string msg) {
	string value;
	cout << msg << ": ";
	cin >> value;
	return value;
}