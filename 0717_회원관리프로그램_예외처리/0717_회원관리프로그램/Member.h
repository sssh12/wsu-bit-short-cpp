#pragma once

// Member Ŭ����
class Member {
	// ��� �ʵ�
private:
	string name;
	int age;
	string phone;

	// ������ & �Ҹ���
public:
	Member(string _name, int _age, string _phone);
	~Member();

	// get & set �޼���
public:
	string getName() const;

	int getAge() const;

	string getPhone() const;

	void setAge(int _age);

	void setPhone(string _phone);

	// ��� �޼���
public:
	void PrintLn() const;

	void Print() const;
};