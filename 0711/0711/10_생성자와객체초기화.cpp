#include <iostream>
using namespace std;

// class: ��ü�� ������ �� ����ϴ� Ű����
class Tv {
	bool isOnOff;
	int volume;
	int channel;

public:
	

	Tv(int _volume, int _channel) {
		isOnOff = false;
		volume = _volume;
		channel = _channel;
	}

	void Print() {
		cout << (isOnOff ? "ON" : "OFF") << ", " << volume << ", " << channel << endl;
	}
};

int main() {
	// ��ü ���� -> [�޸� ���� -> �ݵ�� ������ ȣ��]
	Tv tv1(2, 4);

	tv1.Print();

	return 0;
}