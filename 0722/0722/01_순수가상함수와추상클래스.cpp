/*
강아지: 소리를 내는 기능(), 헤엄을 치는 기능()
고양이: 소리를 내는 기능()

1 단계: *공통* 부분을 갖는 부모를 정의 -> 상속 구조
		방법 1) 공통 부분을 갖는 새로운 부모 클래스를 정의
				생각지도 못 한 Animal 클래스를 정의
				- Animal은 객체 생성이 필요할까?
				  Animal을 추상 클래스로 만든다면?
				  - [구현 상속, 구현 약속] 부모는 함수의 선언부만 존재
										   자식은 반드시 선언부를 재정의(구현)

		방법 2) 강아지, 고양이 중 하나를 부모로 올림
*/
#include <iostream>
using namespace std;

// 추상 클래스 -> 객체 생성 불가능
class Animal {
public:
	// 순수 가상 함수 -> 자식은 재정의
	virtual void Sound() const = 0;
};

// 추상 클래스: 부모로부터 물려받은 순수 가상 함수의 재정의 X
class Dog : public Animal {
public:
	void Swim() const {
		cout << "강아지 헤엄~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
};

// 객체 생성이 가능
class Cat : public Animal {
public:
	// 순수 가상 함수를 재정의 함
	void Sound() const {
		cout << "고양이 야옹!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	}
};

int main() {
	// 추상 클래스 객체 생성이 불가능
	// Animal ani;	// 불가능
	// Dog dog;		// 불가능
	Cat cat;		// 가능

	// 추상 클래스 어떻게 활용: 업캐스팅용으로 활용
	Animal* p = new Cat;
	p->Sound();		// 가상: 부모가 아닌 자식의 메서드를 호출한다.

	return 0;
}