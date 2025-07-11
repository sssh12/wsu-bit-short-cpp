#include <iostream>
#include <conio.h>
using namespace std;

struct DrinkMachine {
	string title[5];		// ����� �̸�, ��� ����� ������ 800�� ���� ����
	int money;				// ���Ե� �ݾ�

	void Print() {
		cout << "****************************************" << endl;
		for (int i = 0; i < 5; i++) {
			printf("[%d] %s\n", i, title[i].c_str());
		}
		cout << "****************************************" << endl;
		cout << "���� �ݾ�: " << money << "��" << endl;
		cout << "****************************************" << endl;
	}

	void Init() {					// ����� ���, money 0
		string product[5] = { "�ݶ�", "���̴�", "Ŀ��", "�ü�", "�Ϲٻ�" };
		for (int i = 0; i < 5; i++) {
			title[i] = product[i];
		}
		money = 0;
	}
	
	void InputMonney(int inMoney) {
		money += inMoney;
	}

	string DrinkSelect(int idx) {	// ���� -> ������ ����� �̸� ��ȯ
		// ���� �ݾ� ����
		if (money < 800) {
			return "-";
		}

		string select = title[idx];
		money -= 800;
		return select;
	}

	int OutputMoney() {				// �ܵ� ��ȯ
		int temp = money;
		money = 0;
		return temp;
	}
};

int main() {
	DrinkMachine dm;

	dm.Init();

	while (true) {
		system("cls");
		dm.Print();
		cout << "--------------------------------------------------" << endl;
		cout << "[1] �ݾ� ���� [2] ��ǰ ���� [3] �ݾ� ��ȯ [4] ����" << endl;
		cout << "--------------------------------------------------" << endl;
		char ch = _getch();
		switch (ch) {
		case '1': {
			int m;
			cout << "������ �ݾ�: "; cin >> m;
			dm.InputMonney(m);		
			break;
		}
		case '2': {
			int idx;
			cout << "��ǰ ��ȣ: "; cin >> idx;
			string product = dm.DrinkSelect(idx);
			if (product == "-") {
				cout << "���� �־��" << endl;
			}
			else {
				cout << "ȹ���� �����: " << product << endl;
			}
			system("pause");
			break;
		}
		case '3': {
			int oMoney = dm.OutputMoney();
			cout << "��ȯ�� �ݾ�: " << oMoney << "��" << endl;
			system("pause");
			break;
		}
		case '4': return 0;
		}
	}

	return 0;
}