/*
부모* = &자식
*/
#include <iostream>
using namespace std;

class Parent {
public:
	void func1() {
		cout << "Parent::func1()" << endl;
	}
};

class Child: public Parent {
	// override(재정의)
public:
	void func1() {
		cout << "Child::func1()" << endl;
	}
};

int main() {
	Parent* p1;	// 객체 생성 X, Parent 주소 저장 공간
	Child c1;	// 자식 객체 생성

	p1 = &c1;	// 업캐스팅 (에러 X, 강제 형변환 필요 없다.)
	
	// 일반적으로 사용되는 업캐스팅 패턴
	Parent* p2 = new Child;
	p2->func1();			// 목적: Child::func1()
							// 문법: Parent::func1()

	delete p2;

	return 0;
}