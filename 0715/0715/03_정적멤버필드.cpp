#include <iostream>
using namespace std;

// #pragma pack(1)
class Card {
public:
	static int width;	// ���� �� -> Ŭ���� ���
	static int height;	// ���� �� -> Ŭ���� ���

private:
	int number;	// 1 ~ 13
	char shape;	// S, C, H, D

public:
	Card(int _number, char _shape) : number(_number), shape(_shape) {};

public:
	void Print() const {
		cout << width << ", " << height << ", " << number << ", " << shape << endl;
	}
};

int Card::width = 100;	// Ŭ���� �ܺ� �ʱ�ȭ
int Card::height = 200;

int main() {

	cout << Card::width << endl;	// Ŭ���������� ����: 100
	cout << sizeof(Card) << endl;	// 8 byte

	// Card ��ü�� ���� �� ���
	Card c1(1, 'S');
	Card c2(2, 'C');

	c1.Print();
	c2.Print();


	return 0;
}