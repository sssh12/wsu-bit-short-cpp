// 부모와 자식 관계 구성(is a) A-자식은 B-부모이다, B-부모는 A-자식이 아니다.
// 사자(자식)은 동물(부모)이다.
// 동물(부모)은 사자(자식)가 아니다.
// 자식은 부모의 멤버를 물려받는다.
#include <iostream>
using namespace std;

// 자식은 부모의 멤버를 물려받는다.
class Parent {
	int num1;

public:
	void parent_func1() {
		cout << "Parent::func1()" << endl;
	}
};

// 물려받고(멤버 필드 1개, 멤버 메서드 1개) 
// + 확장(멤버 필드 1개 추가, 멤버 메서드 1개 추가)
class Child: public Parent 
{
	int num2;

public:
	void child_func1() {
		cout << "Child::func1()" << endl;
	}
};

int main() {
	Child c1;
	cout << "Child 메모리 크기: " << sizeof(Child) << " byte" << endl;
	cout << "Child 메모리 크기: " << sizeof(c1) << " byte" << endl;

	c1.child_func1();
	c1.parent_func1();

	return 0;
}