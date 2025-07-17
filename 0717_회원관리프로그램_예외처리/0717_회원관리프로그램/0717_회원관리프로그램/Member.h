#pragma once

// Member 클래스
class Member {
	// 멤버 필드
private:
	string name;
	int age;
	string phone;

	// 생성자 & 소멸자
public:
	Member(string _name, int _age, string _phone);
	~Member();

	// get & set 메서드
public:
	string getName() const;

	int getAge() const;

	string getPhone() const;

	void setAge(int _age);

	void setPhone(string _phone);

	// 기능 메서드
public:
	void PrintLn() const;

	void Print() const;
};