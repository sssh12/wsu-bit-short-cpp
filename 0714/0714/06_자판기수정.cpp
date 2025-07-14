/*
1. 소유(생과 사를 같이 하는)
	- 생성자, 소멸자 코드!

2. 소유하는 목적은 해당 객체의 기능이 필요해서

3. 다른 객체의 맴버 필드는 항상 물어서 획득한다.

1. Drink객체(제품명, 가격, 수량)
2. DrinkMachine객체(Drink 객체들 5개 소유, 투입금액)
------------------------------------------------------
* 사용자 관점에서 자판기를 사용하는 기능을 제공하겠다.
-------------------------------------------------------
*/
#include <iostream>
using namespace std;
#include <conio.h>

class Drink
{
	//맴버 필드(데이터)
private:
	string title;	//제품명
	int price;		//제품가격 0 <=
	int count;		//제품수량

	//생성자 & 소멸자 
public:
	Drink(string _title, int _price, int _count)
	{
		title = _title;
		price = _price;
		count = _count;
	}
	Drink(string _title, int _price)
	{
		title = _title;
		price = _price;
		count = 5;
	}
	~Drink()
	{
	}

	//get& set메서드 
public:
	string getTitle() { return title; }
	int getPrice() { return price; }
	int getCount() { return count; }

	void setPrice(int _price)
	{
		if (_price <= 0)
			return;

		price = _price;
	}

public:
	void selCount()
	{
		count--;
	}
	void AddCount(int _count)
	{
		count = count + _count;
	}
	void Print()
	{
		cout << title << "\t";
		cout << price << "원\t";
		cout << count << "개" << endl;
	}
};

class DrinkMachine
{
private:
	Drink* title[5];	 //음료수들
	int money;			 //투입된 금액 

public:
	DrinkMachine()
	{
		money = 0;

		title[0] = new Drink("콜    라", 1000, 4);
		title[1] = new Drink("사 이 다", 1200, 2);
		title[2] = new Drink("제로콜라", 1400, 5);
		title[3] = new Drink("환    타", 1500, 1);
		title[4] = new Drink("생    수", 800, 3);
	}
	~DrinkMachine()
	{
		delete title[0];
		delete title[1];
		delete title[2];
		delete title[3];
		delete title[4];
	}

public:
	int getMoney() { return money; }

	//배열의 인덱스 -> 해당인덱스에 저장된 Drink*반환
	Drink* getDrink(int idx) { return title[idx]; }

public:
	void Print()
	{
		cout << "************************************************" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "[" << i << "] ";  //printf("[%d] ", i);
			Drink* drink = title[i];
			drink->Print();		//****
		}
		cout << "************************************************" << endl;
		cout << "투입금액 : " << money << "원" << endl;
		cout << "************************************************" << endl;
	}

	void InputMoney(int _money)
	{
		money = money + _money;
	}

	Drink* DrinkSelect(int idx)  //선택 -> 선택한 음료수의 주소를 반환
	{
		Drink* drink = title[idx];

		//투입금액 부족
		if (money < drink->getPrice())
			return NULL;

		if (drink->getCount() == 0)
		{
			//cout << "수량 부족" << endl;
			return NULL;
		}
		money = money - drink->getPrice();
		drink->selCount();
		return drink;
	}

	int OutputMoney()  //잔돈 반환
	{
		int temp = money;
		money = 0;
		return temp;
	}
};

int main()
{
	DrinkMachine dm;

	while (true)
	{
		system("cls");
		dm.Print();
		cout << "--------------------------------------------------" << endl;
		cout << "[1]금액투입  [2]제품선택  [3]금액반환  [4]종료 " << endl;
		cout << "--------------------------------------------------" << endl;
		char ch = _getch();  //#include <conio.h>
		switch (ch)
		{
		case '1':
		{
			int money;
			cout << "투입할 금액 : ";		cin >> money;
			dm.InputMoney(money);
			break;
		}
		case '2':
		{
			int idx;
			cout << "제품 선택 : ";			cin >> idx;

			Drink* drink = dm.DrinkSelect(idx);
			if (drink == NULL)
			{
				cout << "잔액 부족이거나 개수 부족" << endl;
			}
			else
			{
				cout << "획득한 음료수 : " << drink->getTitle() << endl;
			}
			system("pause");
			break;
		}
		case '3':
		{
			int money = dm.OutputMoney();
			cout << "반환된 금액 : " << money << "원" << endl;
			system("pause");
			break;
		}
		case '4': return 0;
		}
	}
	return 0;
}

