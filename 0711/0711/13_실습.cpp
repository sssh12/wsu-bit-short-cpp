#include <iostream>
using namespace std;

class Drink {
private:
	string name;
	int price;
	int count;

public:
	Drink(string _name, int _price) {
		name = _name;
		price = _price;
		count = 0;
	}

	Drink(string _name, int _price, int _count) {
		name = _name;
		price = _price;
		count = _count;
	}

public:
	void setCount(int _count) {
		count = _count;
	}

	void setPrice(int _price) {
		price = _price;
	}

	void setTitle(string _name) {
		name = _name;
	}

public:
	void Print() {
		cout << name << ", " << price << ", " << count << endl;
	}
};

int main() {
	// 멤버 필드: string name, int price, int count
	Drink drink1("콜라", 1000, 3);		// string name, int price
	Drink drink2("사이다", 2000, 4);	//
	Drink drink3("환타", 1500);

	drink3.setCount(6);
	drink1.setPrice(1200);
	drink2.setTitle("제로사이다");

	drink1.Print();	// 콜라, 1200, 3
	drink2.Print();	// 제로사이다, 2000, 4
	drink3.Print();	// 환타, 1500, 6

	return 0;
}