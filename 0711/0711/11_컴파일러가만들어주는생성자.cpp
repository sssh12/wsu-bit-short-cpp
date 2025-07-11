/*
객체 생성
1) 메모리 생성(멤버 변수가 저장될 공간 생성, 멤버 함수 X)
2) 생성자 호출 -> 초기화

* 객체를 정의할 때 [생성자를 만들지 않으면] 컴파일러가 자동으로 생성자를 만들어준다.
* - 디폴트 생성자(인자가 없는 생성자)를 만들어준다.
* - 초기화 X
* ex) Sample() {	}
*/
#include <iostream>
using namespace std;

class Sample {
private:
	int num;

public:
	void Print() {
		cout << num << endl;
	}
};

class Sample1 {
private:
	int num;

public:
	Sample1(int _num) {
		num = _num;
	}

	void Print() {
		cout << num << endl;
	}
};

int main() {
	Sample s1;	// 메모리 4 byte s1.num

	s1.Print();

	Sample1 s2(1);	
	s2.Print();

	return 0;
}