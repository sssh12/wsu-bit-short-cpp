#include <iostream>
using namespace std;

class mystring
{
	char arr[100];	//문자열 배열

public:
	mystring() {
		strcpy_s(arr, sizeof(arr), "");
	}
	mystring(const char* msg) {
		strcpy_s(arr, sizeof(arr), msg);
	}

public:
	bool operator==(const mystring& s) {
		if (strcmp(arr, s.arr) == 0)
			return true;
		else
			return false;
	}

	friend ostream& operator<<(ostream& out, mystring& mem) {
		out << mem.arr;
		return out;
	}
};

int main() {
	string str1("aaa");				cout << str1 << endl;
	string str2 = "aaa";			cout << str2 << endl;
	str2 = "bbb";					cout << str2 << endl;
	if (str1 == str2) {

	}

	mystring str3;					cout << str3 << endl;
	mystring str4("aaa");			cout << str4 << endl;
	mystring str5 = "bbb";			cout << str5 << endl;
	if (str3 == str4){ 	//str3.oprator==(str4)

	}

}