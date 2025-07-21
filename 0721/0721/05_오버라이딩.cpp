/*
부모로부터 물려받은 메서드를 자식이 재정의
자식이 Print를 왜 재정의 했을까?
- 부모의 Print: 이름, 나이만 출력
	하지만 자식은 출력 정보가 4개이다.
*/
#include <iostream>
using namespace std;

class Person {
// private:
protected:			// 본인 + 자식
	string name;	// 이름
	int age;		// 나이

public:
	Person(string _name, int _age) : name(_name), age(_age) {
	}

public:
	void Print1() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	void Print2() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
};

class Student : public Person {
private:
	string major;	// 학과
	int number;		// 학번

public:
	Student(string _name, int _age, string _major, int _number):
		Person(_name, _age), major(_major), number(_number) {
		// name = _name;		// private
		// age = _age;			// private
		// major = _major;		// OK
		// number = _number;	// OK
	}

public:
	// 오버라이드(멤버 함수 재정의)
	// 1 방법: 4개 출력
	//		   부모의 멤버 필드를 자식이 접근하도록 허용(protected)
	void Print1() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
		cout << "학과: " << major << endl;
		cout << "학년: " << number << endl;
	}

	// 2 방법: 4개 출력(권장)
	void Print2() const {
		// 부모로부터 물려받은 private 멤버 이름, 나이?
		Person::Print2();
		cout << "학과: " << major << endl;
		cout << "학년: " << number << endl;
	}
};

int main() {
	Student stu1("홍길동", 20, "컴퓨터소프트웨어", 3);
	// stu1.Print1();
	stu1.Print2();
	
	return 0;
}