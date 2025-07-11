/*
TV ��ü ����: ������ ���� -> ������ ���� ��� ����
*/
#include <iostream>
#include <conio.h>
using namespace std;

struct tv {
	bool isOnOff;
	int channel;
	int volume;		// ����: 0 ~ 50 0���� ũ�ų� ����, 50���� �۴�.
	
	// ���� ���(����� ����)
	void setOnOff() {
		isOnOff = !isOnOff;
	}
	
	void channelUp() {
		if (isOnOff == false) {
			cout << "TV�� �����ֽ��ϴ�." << endl;
			return;
		}

		channel++;
	}

	void channelDown() {
		if (isOnOff == false) {
			cout << "TV�� �����ֽ��ϴ�." << endl;
			return;
		}

		channel--;
	}

	void channelInsert(int inChannel) {
		channel = inChannel;
	}

	void volumeUp() {
		if (isOnOff == false) {
			cout << "TV�� �����ֽ��ϴ�." << endl;
			return;
		}
		else {
			if (volume == 49) {
				return;
			}
			else {
				volume++;
			}
		}
	}

	void volumeDown() {
		if (isOnOff == false) {
			cout << "TV�� �����ֽ��ϴ�." << endl;
			return;
		}
		else {
			if (volume == 0) {
				return;
			}
			else {
				volume--;
			}
		}
	}

	void print() {
		if (isOnOff == true) {
			cout << "**********************************" << endl;
			cout << "����: " << (isOnOff ? "ON" : "OFF") << endl;
			cout << "ä��: " << channel << "��" << endl;
			cout << "����: " << volume << endl;
			cout << "**********************************" << endl;
		}
		else {
			cout << "**********************************" << endl;
			cout << "����: " << (isOnOff ? "ON" : "OFF") << endl;
			cout << "ä��: " << endl;
			cout << "����: " << endl;
			cout << "**********************************" << endl;
		}
	}
};

int main() {
	tv tv = { false, 0, 0 };

	while (true) {
		system("cls");
		tv.print();
		cout << "-------------------------------------------------" << endl;
		cout << "[1] ���� [2] ���� UP [3] ���� DOWN" << endl;
		cout << "[4] ä�� UP [5] ä�� DOWN [6] ä�� �Է� [7] ����" << endl;
		cout << "-------------------------------------------------" << endl;
		char ch = _getch();
		switch (ch) {
		case '1': tv.setOnOff();		break;
		case '2': tv.volumeUp();		break;
		case '3': tv.volumeDown();		break;
		case '4': tv.channelUp();		break;
		case '5': tv.channelDown();		break;
		case '6': {
			int c;
			cout << "ä�� �Է�: "; cin >> c;
			tv.channelInsert(c);	
			break;
		}
		case '7': return 0;
		}
	}

	return 0;
}