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
	// ���� �Լ� - Ŭ���� �ȿ��� �����ϴ� ��
	friend ostream& operator<<(ostream& out, Member& mem) {
		out << mem.id << ", " << mem.name << ", " << mem.gender;
		return out;
	}

};

int main() {
	Member mem(10, "ȫ�浿", 'm');
	mem.Print();

	cout << mem << endl;	// cout.operator<<(mem);
							// operator<<(cout, mem);

	return 0;
}