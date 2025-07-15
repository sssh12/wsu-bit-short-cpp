#include <iostream>
using namespace std;

// #pragma pack(1)
class Card {
public:
	static int width;	// 같은 값 -> 클래스 멤버
	static int height;	// 같은 값 -> 클래스 멤버

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

int Card::width = 100;	// 클래스 외부 초기화
int Card::height = 200;

int main() {

	cout << Card::width << endl;	// 클래스명으로 접근: 100
	cout << sizeof(Card) << endl;	// 8 byte

	// Card 객체를 생성 후 사용
	Card c1(1, 'S');
	Card c2(2, 'C');

	c1.Print();
	c2.Print();


	return 0;
}