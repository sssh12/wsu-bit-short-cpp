/*
private	 : 객체 내부에서만 접근 가능 
protected: 객체 내부 + 자식까지 접근 가능
public	 : 누구나(객체 내/외부) 접근 가능

struct는 기본이 public
*/
#include <iostream>
using namespace std;

struct Sample {
	int n1;
private:
	int n2;
	int n3;

public:
	void func1() {
		n1 = 1;
		n2 = 2;	// private
		n3 = 3;	// private
	}

	void func2() {
		func1();
	}
};

int main() {
	Sample s1;

	s1.func1();
	// s1.n2 = 1 // 에러

	return 0;
}