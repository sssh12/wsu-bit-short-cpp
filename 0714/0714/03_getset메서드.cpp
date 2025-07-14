/*
캡슐화와 데이터 은닉(안전성, 무결성, 항상 유효한 값을 가져야한다.)
1) get 메서드 : 은닉된 데이터를 외부로 반환
2) set 메서드 : 은닉된 데이터의 값을 외부에서 수정 요청
*/
#include <iostream>
using namespace std;

class Drink {
	// 멤버 필드
private:
	string title;
	int price;

	// 생성자 & 소멸자
public:
	Drink(string _title, int _price) {
		title = _title;
		price = _price;
	}
	~Drink() {

	}

	// get & set 메서드
public:
	string getTitle() {
		return title;
	}
	int getPrice() {
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