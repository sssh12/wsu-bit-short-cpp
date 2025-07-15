// 04_정적멤버필드 복사
// 만약 연도가 변경되어서 2026001으로 회원 번호를 변경하고 싶다면?
// 정적 메서드를 만들어서 처리하자
#include <iostream>
using namespace std;

class Member {
private:
	static int s_number;	// 클래스 멤버
	int number;
	string name;
	string phone;

public:
	Member(string _name, string _phone) :
		number(s_number), name(_name), phone(_phone) {
		s_number++;
	}

public:
	void Print() const {
		cout << number << ", " << name << ", " << phone << endl;
	}

	static void setSNumber(int _s_number) {
		s_number = _s_number;
	}
};

int Member::s_number = 2025001;

int main() {
	Member m1("오승하", "010-8343-7705");
	Member m2("류지후", "010-1234-5678");

	m1.Print();
	m2.Print();

	// 2026년도
	// Member::s_number = 2026001; // 데이터 은닉
	// m2.setSNumber(2026001);
	Member::setSNumber(2026001);

	Member m3("권성욱", "010-2222-3333");

	m3.Print();

	return 0;
}