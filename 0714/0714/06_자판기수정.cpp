/*
1. ����(���� �縦 ���� �ϴ�)
	- ������, �Ҹ��� �ڵ�!

2. �����ϴ� ������ �ش� ��ü�� ����� �ʿ��ؼ�

3. �ٸ� ��ü�� �ɹ� �ʵ�� �׻� ��� ȹ���Ѵ�.

1. Drink��ü(��ǰ��, ����, ����)
2. DrinkMachine��ü(Drink ��ü�� 5�� ����, ���Աݾ�)
------------------------------------------------------
* ����� �������� ���Ǳ⸦ ����ϴ� ����� �����ϰڴ�.
-------------------------------------------------------
*/
#include <iostream>
using namespace std;
#include <conio.h>

class Drink
{
	//�ɹ� �ʵ�(������)
private:
	string title;	//��ǰ��
	int price;		//��ǰ���� 0 <=
	int count;		//��ǰ����

	//������ & �Ҹ��� 
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

	//get& set�޼��� 
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
		cout << price << "��\t";
		cout << count << "��" << endl;
	}
};

class DrinkMachine
{
private:
	Drink* title[5];	 //�������
	int money;			 //���Ե� �ݾ� 

public:
	DrinkMachine()
	{
		money = 0;

		title[0] = new Drink("��    ��", 1000, 4);
		title[1] = new Drink("�� �� ��", 1200, 2);
		title[2] = new Drink("�����ݶ�", 1400, 5);
		title[3] = new Drink("ȯ    Ÿ", 1500, 1);
		title[4] = new Drink("��    ��", 800, 3);
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

	//�迭�� �ε��� -> �ش��ε����� ����� Drink*��ȯ
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
		cout << "���Աݾ� : " << money << "��" << endl;
		cout << "************************************************" << endl;
	}

	void InputMoney(int _money)
	{
		money = money + _money;
	}

	Drink* DrinkSelect(int idx)  //���� -> ������ ������� �ּҸ� ��ȯ
	{
		Drink* drink = title[idx];

		//���Աݾ� ����
		if (money < drink->getPrice())
			return NULL;

		if (drink->getCount() == 0)
		{
			//cout << "���� ����" << endl;
			return NULL;
		}
		money = money - drink->getPrice();
		drink->selCount();
		return drink;
	}

	int OutputMoney()  //�ܵ� ��ȯ
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
		cout << "[1]�ݾ�����  [2]��ǰ����  [3]�ݾ׹�ȯ  [4]���� " << endl;
		cout << "--------------------------------------------------" << endl;
		char ch = _getch();  //#include <conio.h>
		switch (ch)
		{
		case '1':
		{
			int money;
			cout << "������ �ݾ� : ";		cin >> money;
			dm.InputMoney(money);
			break;
		}
		case '2':
		{
			int idx;
			cout << "��ǰ ���� : ";			cin >> idx;

			Drink* drink = dm.DrinkSelect(idx);
			if (drink == NULL)
			{
				cout << "�ܾ� �����̰ų� ���� ����" << endl;
			}
			else
			{
				cout << "ȹ���� ����� : " << drink->getTitle() << endl;
			}
			system("pause");
			break;
		}
		case '3':
		{
			int money = dm.OutputMoney();
			cout << "��ȯ�� �ݾ� : " << money << "��" << endl;
			system("pause");
			break;
		}
		case '4': return 0;
		}
	}
	return 0;
}

