/*
자식 객체 생성: 부모 생성 -> 자식 생성
				생성된 모든 정보를 -> 자식 객체라고 한다.
				따라서 물려받은 결과물 만들어진다.
자식 객체 소멸: 자식 소멸 -> 부모 소멸
*/
#include <iostream>
using namespace std;

class Parent {
public:
	Parent() {
		cout << "Parent::Parent()" << endl;
	};
	Parent(int num1) {
		cout << "Parent::Parent(int)" << endl;
	};
	~Parent() {
		cout << "Parent::~Parent()" << endl;
	};
};

class Child : public Parent {
public:
	// 먼저 호출되는 중요한 이유
	// 자식의 콜론 초기화 영역 체크
	// 컴파일러는 부모의 어떤 생성자를 호출하는 코드가 있는지 확인
	// 만약, 없으면 부모의 인자가 없는 디폴트 생성자가 호출된다.
	Child(): Parent(10) {	// *****
		cout << "Child::Child()" << endl;
	};
	~Child() {
		cout << "Child::~Child()" << endl;
	};
};

int main() {
	Child c;	// 자식 객체 생성

	return 0;
}