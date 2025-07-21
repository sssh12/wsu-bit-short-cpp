/*
강아지: 소리를 내는 기능(), 헤엄을 치는 기능()
고양이: 소리를 내는 기능()

1 단계: 공통 부분을 갖는 부모를 정의 -> 상속 구조
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
	void Swim() const {
		cout << "강아지 헤엄~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
};

class Cat: public Animal {
public:
};

int main() {
	Dog dog;
	dog.Sound();	// 내가 원하는 강아지 소리가 아님
	dog.Swim();
	
	Cat cat;
	cat.Sound();	// 내가 원하는 고양이 소리가 아님

	return 0;
}