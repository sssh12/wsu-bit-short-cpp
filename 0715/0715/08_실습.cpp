#include <iostream>
#include <conio.h>
using namespace std;

// Member 클래스
class Member {
	// 멤버 필드
private:
	string name;
	int age;
	string phone;

	// 생성자 & 소멸자
public:
	Member(string _name, int _age, string _phone): 
		name(_name), age(_age), phone(_phone) {
	}
	~Member() {
	}

	// get & set 메서드
public:
	string getName() const {
		return name;
	}

	int getAge() const {
		return age;
	}

	string getPhone() const {
		return phone;
	}

	void setAge(int _age) {
		age = _age;
	}

	void setPhone(string _phone) {
		phone = _phone;
	}

	// 기능 메서드
public:
	void PrintLn() const {
		cout << "[이    름]: " << name << endl;
		cout << "[나    이]: " << age << endl;
		cout << "[전화번호]: " << phone << endl;
	}

	void Print() const {
		cout << "이름: " << name << "\t" << "나이: " << age;
		cout << "\t" << "전화번호: " << phone << endl;
	}
};

// MyPrint 클래스
class MyPrint {
public:
	static void Logo() {
		system("cls");
		cout << "************************************************************************" << endl;
		cout << "2025학년도 1학기" << endl;
		cout << "C++ 언어 회원 관리 프로그램" << endl;
		cout << "2025-07-15" << endl;
		cout << "오승하" << endl;
		cout << "************************************************************************" << endl;
		system("pause");
	}

	static char Menu() {
		cout << "************************************************************************" << endl;
		cout << "[1] 회원 저장(insert)" << endl;
		cout << "[2] 회원 검색(select)" << endl;
		cout << "[3] 회원 수정(update)" << endl;
		cout << "[4] 회원 삭제(delete)" << endl;
		cout << "[5] 프로그램 종료(exit)" << endl;
		cout << "************************************************************************" << endl;
		return _getch();	
	
	}

	static void Ending() {
		system("cls");
		cout << "************************************************************************" << endl;
		cout << "프로그램을 종료합니다." << endl;
		cout <<"************************************************************************" << endl;
		system("pause");
	}
};

// MyInput 클래스
class MyInput {
public:
	static int InputInteger(string msg) {
		int value;
		cout << msg << ": ";
		cin >> value;
		return value;
	}

	static float InputFloat(string msg) {
		float value;
		cout << msg << ": ";
		cin >> value;
		return value;
	}

	static char InputChar(string msg) {
		char value;
		cout << msg << ": ";
		cin >> value;
		return value;
	}

	static string InputString(string msg) {
		string value;
		cout << msg << ": ";
		cin >> value;
		return value;
	}
};

// MyArr 클래스
#define ARR_MAX 10
class MyArr {
private:
	void* arr[ARR_MAX];		// void*를 저장하는 배열
	int size;
	int max;

public:
	MyArr(): size(0), max(ARR_MAX) {
		for (int i = 0; i < ARR_MAX; i++) {
			arr[i] = NULL;		// #define NULL 0
		}
	}
	~MyArr() {
		for (int i = 0; i < size; i++) {
			delete arr[i];
		}
	}

public:
	int getSize() const {
		return size;
	}

	int getMax() const {
		return max;
	}

	void* getData(int idx) {
		return arr[idx];
	}

public:
	bool PushBack(void* value) {
		if (max <= size) {
			return false;
		}
		arr[size] = value;
		size++;

		return true;
	}

	bool Erase(int idx) {
		if (idx < 0 || idx >= size) {
			return false;
		}

		for (int i = idx; i < size - 1; i++) {
			arr[i] = arr[i + 1];
		}
		size--;
		return true;
	}
};

int main() {
	return 0;
}