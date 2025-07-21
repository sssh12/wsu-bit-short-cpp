/*

*/
#include <iostream>
using namespace std;

class Animal {
	// ���� ��� �Լ�
public:
	virtual void Sound() const {
		cout << "...................." << endl;
	}
};

class Dog : public Animal {
public:
	void Sound() const {
		cout << "������ �۸�!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	}
	void Swim() const {
		cout << "������ ���~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
};

class Cat : public Animal {
public:
	void Sound() const {
		cout << "����� �߿�~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
};

int main() {
	Animal* ani = new Dog;	// ��ĳ����

	// ������: Swim ȣ�� �Ұ�
	ani->Sound();

	// 1) ���� ����ȯ(�ٿ�ĳ����)
	Dog* dog = (Dog*)ani;

	dog->Sound();
	dog->Swim();

	// ������ (������ ����)
	Cat* cat = (Cat*)ani;
	cat->Sound();				// ����� Ÿ�� -> ������ �Ҹ��� ����.

	// 2) �ٿ� ĳ���ÿ� ������ ����(�̰��� Ȱ��)
	Dog* dog1 = dynamic_cast<Dog*>(ani);
	if (dog1 != NULL) {
		dog1->Sound();
		dog1->Swim();
	}

	Cat* cat1 = dynamic_cast<Cat*>(ani);
	if (cat1 == NULL) {
		cout << "����̰� �ƴϴ�." << endl;
	}

	return 0;
}