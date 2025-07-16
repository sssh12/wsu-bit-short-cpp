#include <iostream>
using namespace std;

class Member {
private:
	int id;
	string name;
	char gender;

public:
	Member(int _id, string _name, char _gender): id(_id), name(_name), gender(_gender) {
	}

	// 변환 연산자
public:
	operator int() const {		// 객체를 int로 변환하겠다.
		return id;
	}

	operator string() const {	// 객체를 string으로 변환하겠다.
		return name;
	}

	operator char() const {		// 객체를 char로 변환하겠다.
		return gender;
	}
};

void exam1() {
	Member mem(10, "홍길동", 'm');

	int id = mem;

	string name = mem;

	char gender = mem;

	cout << id << ", " << name << ", " << gender << endl;
}

int InputInteger(string msg) {
	int value;
	
	while (1) {
		cout << msg << ": ";
		cin >> value;

		if (cin) {			// 자신의 상태 정보를 반환(정상 입력)
			return value;
		}
		else {
			cin.clear();	// 초기 상태로
			cin.ignore();	// 버퍼 문자 1개 제거
		}
	}
	
}

void exam2() {
	int number = InputInteger("정수 입력");
	cout << "입력 결과: " << number << endl;
}

int main() {
	//exam1();
	exam2();

	return 0;
}