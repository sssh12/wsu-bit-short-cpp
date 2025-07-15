// 상수 멤버 필드는 반드시 생성자 콜론 초기화 영역에서 초기화해야한다.
#include <iostream>
using namespace std;

class Student {
private:
	const int id;		// 상수 멤버 필드
	string name;

public:
	Student(int _id, string _name): id(_id), name(_name) {
		// id = _id;
		// name = _name;
	}

public:
	void func1() {
		// id = 10;	// 상수 멤버 필드는 대입 연산이 불가하다.
	}
};

int main() {
	return 0;
}