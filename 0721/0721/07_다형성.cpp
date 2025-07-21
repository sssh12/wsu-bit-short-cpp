/*
������: �Ҹ��� ���� ���(), ����� ġ�� ���()
�����: �Ҹ��� ���� ���()

1 �ܰ�: ���� �κ��� ���� �θ� ���� -> ��� ����
2 �ܰ�: ������ ������ �ڽ��� �Ҹ��� ������ ����
		�������̵�(������)
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
		cout << "������ �۸�!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	}
	void Swim() const {
		cout << "������ ���~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
};

class Cat: public Animal {
public:
	void Sound() const {
		cout << "����� �߿�~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
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