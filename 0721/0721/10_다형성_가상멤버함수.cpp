/*
강아지: 소리를 내는 기능(), 헤엄을 치는 기능()
고양이: 소리를 내는 기능()

1 단계: 공통 부분을 갖는 부모를 정의 -> 상속 구조
2 단계: 각각의 동물이 자신의 소리를 내도록 수정
		오버라이드(재정의)
3 단계: 서로 다른 여러 동물들을 하나의 배열로 관리할 수 있다.
		업캐스팅
4 단계: 부모의 포인터로 자식의 멤버 함수를 호출
		가상 멤버 함수
*/
#include <iostream>
using namespace std;

class Animal {
	// 가상 멤버 함수
public:
	virtual void Sound() const {
		cout << "...................." << endl;
	}
};

class Dog : public Animal {
public:
	void Sound() const {
		cout << "강아지 멍멍!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	}
	void Swim() const {
		cout << "강아지 헤엄~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
};

class Cat : public Animal {
public:
	void Sound() const {
		cout << "고양이 야옹~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
};

int main() {
	// 업캐스팅
	// Animal의 주소를 저장하는 공간 4개 생성
	// Animal 자식들의 주소를 저장할 수 있다.
	Animal* woori[4];


	// 1. 통합 관리
	woori[0] = new Dog;
	woori[1] = new Cat;
	woori[2] = new Cat;
	woori[3] = new Dog;

	// 2. 모든 동물들이 소리를 낸다.
	for (int i = 0; i < 4; i++) {
		Animal* ani = woori[i];
		ani->Sound();				// ?????

	}
	// Animal의 Sound만 호출된다.
	// 원한 건 Dog, Cat의 Sound

	return 0;
}