#include <iostream>
using namespace std;

class Sample {
private:
	int number;
	string str;

public:
	Sample() : number(-1), str("-") {
		cout << "1. Sample()" << endl;
	}
	Sample(int _number, string _str) : number(_number), str(_str) {
		cout << "2. Sample(int n1)" << endl;
	}
	Sample(Sample& s) {				// 복사 생성자 구현
		cout << "복사 생성자" << endl;
		*this = s;
	}
	~Sample() {
		cout << "3. ~Sample()" << endl;
	}

public:
	void Print() const {
		cout << number << ", " << str << endl;
	}
};

int main() {
	Sample s1;
	Sample s2(10, "문자열");

	Sample s3(s1);	// 복사 생성자 호출됨(컴파일러가 무조건 만들어준다.)
	Sample s4 = s2;	// 복사 생성자 호출됨

	s1.Print();
	s2.Print();

	s3.Print();
	s4.Print();

	return 0;
}