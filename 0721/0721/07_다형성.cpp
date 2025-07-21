/*
강아지: 소리를 내는 기능(), 헤엄을 치는 기능()
고양이: 소리를 내는 기능()

1 단계: 공통 부분을 갖는 부모를 정의 -> 상속 구조
2 단계: 각각의 동물이 자신의 소리를 내도록 수정
		오버라이드(재정의)
*/
#include <iostream>
using namespace std;

class Animal {
public:
	void Sound() const {
		cout << "...................." << endl;
	}
};

class Dog: public Animal {
public:
	void Sound() const {
		cout << "강아지 멍멍!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	}
	void Swim() const {
		cout << "강아지 헤엄~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
};

class Cat: public Animal {
public:
	void Sound() const {
		cout << "고양이 야옹~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
};

int main() {
	Dog dog;
	dog.Sound();	
	dog.Swim();

	Cat cat;
	cat.Sound();

	return 0;
}