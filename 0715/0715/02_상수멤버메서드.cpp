// 0714/03_getset�޼���
// - � ���� ��� ��� �޼���� ��� �ʵ��� ���� ������ �� ����.
// - ���� ���� ����� �޼����� ��� ��� �޼���� ó�� ����
#include <iostream>
using namespace std;

class Drink {
	// ��� �ʵ�
private:
	string title;
	int price;

	// ������ & �Ҹ���
public:
	Drink(string _title, int _price): title(_title), price(_price) {}
	~Drink() {}

	// get & set �޼���
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

	// ��� �޼���
public:
	void Print() {
		cout << title << "\t" << price << "��" << endl;
	}
};

int main() {
	Drink drink("�ݶ�", 1000);
	drink.Print();

	drink.setPrice(1500);	// ***

	drink.Print();
	cout << "��ǰ��: " << drink.getTitle() << endl;

	return 0;
}