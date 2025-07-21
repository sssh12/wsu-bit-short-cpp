/*
생성자 역할: [자신의] 멤버 필드를 초기화
 - 자식이 부모의 멤버 필드를 초기화 할 수 없다.
 - 자식은 부모의 어떤 생성자를 호출하면서 초기화 할 지 결정해준다.
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
};

int main() {
	// Student 클래스에 인자를 4개 받는 생성자가 필요하다.
	Student stu1("홍길동", 20, "컴퓨터소프트웨어", 3);


	return 0;
}