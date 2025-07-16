#include <iostream>
using namespace std;

class Sample {
private:
	int number;

public:
	Sample(int _number): number(_number) {
	}

public:
	void Print() const {
		cout << number << endl;
	}

	Sample Add(const Sample& s) {
		Sample temp(number + s.number);
		return temp;
	}
	Sample operator+(const Sample& s) {
		Sample temp(number + s.number);
		return temp;
	}
};

int main() {
	Sample s1(10);
	s1.Print();

	Sample s2(20);
	s2.Print();
	
	Sample s3 = s1.Add(s2);
	s3.Print();

	Sample s4 = s1 + s2;	// s1.operator+(s2);
	s4.Print();


	return 0;
}