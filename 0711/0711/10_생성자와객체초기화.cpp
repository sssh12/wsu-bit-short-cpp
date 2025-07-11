#include <iostream>
using namespace std;

// class: 객체를 정의할 때 사용하는 키워드
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
	// 객체 생성 -> [메모리 생성 -> 반드시 생성자 호출]
	Tv tv1(2, 4);

	tv1.Print();

	return 0;
}