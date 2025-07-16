#include <iostream>
using namespace std;

class MyTime {
private:
	int hour;
	int min;
	int sec;

public:
	MyTime(int _hour, int _min, int _sec): hour(_hour), min(_min), sec(_sec) {
	}

public:
	void Print() const {
		cout << hour << ":";
		cout << min << ":";
		cout << sec << endl;
	}

	bool isEquals(const MyTime& t) {
		if (hour == t.hour && min == t.min && sec == t.sec) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator==(const MyTime& t) {
		if (hour == t.hour && min == t.min && sec == t.sec) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main() {
	MyTime t1(1, 2, 3);
	t1.Print();

	MyTime t2(1, 2, 3);
	t2.Print();

	if (t1 == t2) {			// t1.isEquals(t2)
		cout << "같은 시간" << endl;
	}
	else {
		cout << "다른 시간" << endl;
	}

	return 0;
}
