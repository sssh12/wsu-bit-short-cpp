#include <iostream>
using namespace std;

struct Sample {
private:
	int num1;
	int num2;

public:
	void Print() {
		cout << num1 << ", " << num2 << endl;
	}
};

int main() {
	// 멤버 변수 은닉: 변수 선언 시 초기화 사용 불가
	// Sample s1 = { 10, 20 };

	// s1.Print();					// 10, 20

	return 0;
}