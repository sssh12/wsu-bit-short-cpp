// 인스턴스가 공유하는 멤버 필드
#include <iostream>
using namespace std;

class Member {
private:
	static int s_number;	// 클래스 멤버
	int number;
	string name;
	string phone;

public:
	Member(string _name, string _phone): 
		number(s_number), name(_name), phone(_phone) {
		s_number++;
	}

public:
	void Print() const {
		cout << number << ", " << name << ", " << phone << endl;
	}
};

int Member::s_number = 2025001;

int main() {
	Member m1("오승하", "010-8343-7705");
	Member m2("류지후", "010-1234-5678");

	m1.Print();
	m2.Print();

	return 0;
}