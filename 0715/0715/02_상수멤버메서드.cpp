// 0714/03_getset메서드
// - 어떤 경우라도 상수 멤버 메서드는 멤버 필드의 값을 변경할 수 없다.
// - 위와 같은 경우의 메서드라면 상수 멤버 메서드로 처리 권장
#include <iostream>
using namespace std;

class Drink {
	// 멤버 필드
private:
	string title;
	int price;

	// 생성자 & 소멸자
public:
	Drink(string _title, int _price): title(_title), price(_price) {}
	~Drink() {}

	// get & set 메서드
public:
	string getTitle() const {
		return title;
	}
	int getPrice() const {
		return price;
	}

	void setTitle(string _title) {
		title = _title;
	}

	void setPrice(int _price) {
		if (_price <= 0) {
			return;
		}
		price = _price;
	}

	// 기능 메서드
public:
	void Print() {
		cout << title << "\t" << price << "원" << endl;
	}
};

int main() {
	Drink drink("콜라", 1000);
	drink.Print();

	drink.setPrice(1500);	// ***

	drink.Print();
	cout << "제품명: " << drink.getTitle() << endl;

	return 0;
}