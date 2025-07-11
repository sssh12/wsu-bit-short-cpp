#include <iostream>
#include <conio.h>
using namespace std;

struct DrinkMachine {
	string title[5];		// 음료수 이름, 모든 음료수 가격은 800원 동일 가정
	int money;				// 투입된 금액

	void Print() {
		cout << "****************************************" << endl;
		for (int i = 0; i < 5; i++) {
			printf("[%d] %s\n", i, title[i].c_str());
		}
		cout << "****************************************" << endl;
		cout << "투입 금액: " << money << "원" << endl;
		cout << "****************************************" << endl;
	}

	void Init() {					// 음료수 등록, money 0
		string product[5] = { "콜라", "사이다", "커피", "냉수", "암바사" };
		for (int i = 0; i < 5; i++) {
			title[i] = product[i];
		}
		money = 0;
	}
	
	void InputMonney(int inMoney) {
		money += inMoney;
	}

	string DrinkSelect(int idx) {	// 선택 -> 선택한 음료수 이름 반환
		// 투입 금액 부족
		if (money < 800) {
			return "-";
		}

		string select = title[idx];
		money -= 800;
		return select;
	}

	int OutputMoney() {				// 잔돈 반환
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
		cout << "[1] 금액 투입 [2] 제품 선택 [3] 금액 반환 [4] 종료" << endl;
		cout << "--------------------------------------------------" << endl;
		char ch = _getch();
		switch (ch) {
		case '1': {
			int m;
			cout << "투입할 금액: "; cin >> m;
			dm.InputMonney(m);		
			break;
		}
		case '2': {
			int idx;
			cout << "제품 번호: "; cin >> idx;
			string product = dm.DrinkSelect(idx);
			if (product == "-") {
				cout << "돈을 넣어라" << endl;
			}
			else {
				cout << "획득한 음료수: " << product << endl;
			}
			system("pause");
			break;
		}
		case '3': {
			int oMoney = dm.OutputMoney();
			cout << "반환된 금액: " << oMoney << "원" << endl;
			system("pause");
			break;
		}
		case '4': return 0;
		}
	}

	return 0;
}