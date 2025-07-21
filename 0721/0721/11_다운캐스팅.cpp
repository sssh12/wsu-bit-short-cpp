/*

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
	Animal* ani = new Dog;	// 업캐스팅

	// 문제점: Swim 호출 불가
	ani->Sound();

	// 1) 강제 형변환(다운캐스팅)
	Dog* dog = (Dog*)ani;

	dog->Sound();
	dog->Swim();

	// 문제점 (무조건 성공)
	Cat* cat = (Cat*)ani;
	cat->Sound();				// 고양이 타입 -> 강아지 소리를 낸다.

	// 2) 다운 캐스팅용 연산자 제공(이것을 활용)
	Dog* dog1 = dynamic_cast<Dog*>(ani);
	if (dog1 != NULL) {
		dog1->Sound();
		dog1->Swim();
	}

	Cat* cat1 = dynamic_cast<Cat*>(ani);
	if (cat1 == NULL) {
		cout << "고양이가 아니다." << endl;
	}

	return 0;
}