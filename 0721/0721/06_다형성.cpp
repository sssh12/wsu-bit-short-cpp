/*
������: �Ҹ��� ���� ���(), ����� ġ�� ���()
�����: �Ҹ��� ���� ���()

1 �ܰ�: ���� �κ��� ���� �θ� ���� -> ��� ����
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
		cout << "������ ���~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
};

class Cat: public Animal {
public:
};

int main() {
	Dog dog;
	dog.Sound();	// ���� ���ϴ� ������ �Ҹ��� �ƴ�
	dog.Swim();
	
	Cat cat;
	cat.Sound();	// ���� ���ϴ� ����� �Ҹ��� �ƴ�

	return 0;
}