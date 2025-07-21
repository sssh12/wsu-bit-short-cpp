/*
������: �Ҹ��� ���� ���(), ����� ġ�� ���()
�����: �Ҹ��� ���� ���()

1 �ܰ�: ���� �κ��� ���� �θ� ���� -> ��� ����
2 �ܰ�: ������ ������ �ڽ��� �Ҹ��� ������ ����
		�������̵�(������)
3 �ܰ�: ���� �ٸ� ���� �������� �ϳ��� �迭�� ������ �� �ִ�.
		��ĳ����
4 �ܰ�: �θ��� �����ͷ� �ڽ��� ��� �Լ��� ȣ��
		���� ��� �Լ�
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
	// ��ĳ����
	// Animal�� �ּҸ� �����ϴ� ���� 4�� ����
	// Animal �ڽĵ��� �ּҸ� ������ �� �ִ�.
	Animal* woori[4];


	// 1. ���� ����
	woori[0] = new Dog;
	woori[1] = new Cat;
	woori[2] = new Cat;
	woori[3] = new Dog;

	// 2. ��� �������� �Ҹ��� ����.
	for (int i = 0; i < 4; i++) {
		Animal* ani = woori[i];
		ani->Sound();				// ?????

	}
	// Animal�� Sound�� ȣ��ȴ�.
	// ���� �� Dog, Cat�� Sound

	return 0;
}