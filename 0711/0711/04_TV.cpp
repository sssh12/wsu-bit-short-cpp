/*
TV 객체 정의: 데이터 정의 -> 데이터 연산 기능 정의
*/
#include <iostream>
#include <conio.h>
using namespace std;

struct tv {
	bool isOnOff;
	int channel;
	int volume;		// 범위: 0 ~ 50 0보다 크거나 같고, 50보다 작다.
	
	// 연산 기능(사용자 관점)
	void setOnOff() {
		isOnOff = !isOnOff;
	}
	
	void channelUp() {
		if (isOnOff == false) {
			cout << "TV가 꺼져있습니다." << endl;
			return;
		}

		channel++;
	}

	void channelDown() {
		if (isOnOff == false) {
			cout << "TV가 꺼져있습니다." << endl;
			return;
		}

		channel--;
	}

	void channelInsert(int inChannel) {
		channel = inChannel;
	}

	void volumeUp() {
		if (isOnOff == false) {
			cout << "TV가 꺼져있습니다." << endl;
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
			cout << "TV가 꺼져있습니다." << endl;
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
			cout << "전원: " << (isOnOff ? "ON" : "OFF") << endl;
			cout << "채널: " << channel << "번" << endl;
			cout << "볼륨: " << volume << endl;
			cout << "**********************************" << endl;
		}
		else {
			cout << "**********************************" << endl;
			cout << "전원: " << (isOnOff ? "ON" : "OFF") << endl;
			cout << "채널: " << endl;
			cout << "볼륨: " << endl;
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
		cout << "[1] 전원 [2] 볼륨 UP [3] 볼륨 DOWN" << endl;
		cout << "[4] 채널 UP [5] 채널 DOWN [6] 채널 입력 [7] 종료" << endl;
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
			cout << "채널 입력: "; cin >> c;
			tv.channelInsert(c);	
			break;
		}
		case '7': return 0;
		}
	}

	return 0;
}