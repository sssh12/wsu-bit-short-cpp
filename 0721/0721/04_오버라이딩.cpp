/*
부모로부터 물려받은 메서드를 자식이 재정의
*/
#include <iostream>
using namespace std;

class Person {
private:
	string name;	// 이름
	int age;		// 나이

public:
	Person(string _name, int _age) : name(_name), age(_age) {
	}

public:
	void Print() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
};

class Student: public Person {
private:
	string major;	// 학과
	int number;		// 학년

public:
	Student(string _name, int _age, string _major, int _number) :
		Person(_name, _age), major(_major), number(_number) {
		// name = _name;		// private
		// age = _age;			// private
		// major = _major;		// OK
		// number = _number;	// OK
	}

public:
	// 오버라이드(멤버 함수 재정의)
	void Print() const {
	
	}
};

int main() {
	Student stu1("홍길동", 20, "컴퓨터소프트웨어", 3);
	// stu1은 총 2개의 메서드를 갖고 있다.
	// 오버라이딩을 해도 물려받는다.
	stu1.Person::Print();		// Person 클래스의 Print
	stu1.Print();				// Student 클래스의 Print

	return 0;
}