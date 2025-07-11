/*
회원(Memb) 객체 정의
- 이름, 나이, 전화 번호

순서: 멤버 필드(데이터) -> 생성자 -> 기능 메서드
*/
#include <iostream>
using namespace std;

class Memb {
private:
	string name;
	int age;
	string phone;

public:
	Memb(string _name) {
		name = _name;
		age = 0;
		phone = "";
	}

	Memb(string _name, int _age, string _phone) {
		name = _name;
		age = _age;
		phone = _phone;
	}

	// set 메서드(특정 멤버 필드의 값을 변경)
public:
	void setAge(int _age) {
		age = _age;
	}

	void setPhone(string _phone) {
		phone = _phone;
	}

public:
	void Print() {
		cout << "이름     : " << name << endl;
		cout << "나이     : " << age << endl;
		cout << "전화 번호: " << phone << endl;
	}
};

int main() {
	Memb mem1("오승하", 26, "010-8343-7705");
	Memb mem2("류지후");

	mem1.setAge(20);

	mem2.setAge(80);
	mem2.setPhone("010-7777-6666");

	mem1.Print();
	mem2.Print();


	return 0;
}