#include "std.h"

int MyInput::InputInteger(string msg) {
	int value;
	cout << msg << ": ";
	cin >> value;
	return value;
}

float MyInput::InputFloat(string msg) {
	float value;
	cout << msg << ": ";
	cin >> value;
	return value;
}

char MyInput::InputChar(string msg) {
	char value;
	cout << msg << ": ";
	cin >> value;
	return value;
}

string MyInput::InputString(string msg) {
	string value;
	cout << msg << ": ";
	cin >> value;
	return value;
}