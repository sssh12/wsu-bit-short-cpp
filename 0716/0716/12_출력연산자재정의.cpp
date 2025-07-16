#include <iostream>
using namespace std;

class Member {
private:
	int id;
	string name;
	char gender;

public:
	Member(int _id, string _name, char _gender) : id(_id), name(_name), gender(_gender) {
	}

public:
	void Print() const {
		cout << id << ", " << name << ", " << gender << endl;
	}

	// friend ostream& operator<<(ostream& out, Member& mem);
	// 전역 함수 - 클래스 안에만 존재하는 것
	friend ostream& operator<<(ostream& out, Member& mem) {
		out << mem.id << ", " << mem.name << ", " << mem.gender;
		return out;
	}

};

int main() {
	Member mem(10, "홍길동", 'm');
	mem.Print();

	cout << mem << endl;	// cout.operator<<(mem);
							// operator<<(cout, mem);

	return 0;
}