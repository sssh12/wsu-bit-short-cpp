// 현재 시간을 출력하고, 시간을 변경할 수 있다.
#include <iostream>
using namespace std;

// 데이터 + 데이터를 연산하는 함수를 같이 캡슐화
// C 언어  : 구조체 정의
// C++ 언어: 객체 정의
struct my_time {
	int hour;
	int min;
	int sec;

	void current_time() {
		hour = 21;
		min = 30;
		sec = 21;
	}

	void current_print() {
		cout << hour << ":";
		cout << min << ":";
		cout << sec << endl;
	}

	void update_time(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}
};

int main() {
	// C 언어  : 변수 선언				  -> 메모리 생성
	// C++ 언어: 객체 생성(인스턴스 생성) -> 메모리 생성
	my_time t1;
	my_time t2;

	// current_time(&t1);
	t1.current_time();
	t2.current_time();

	// current_print(t1);
	t1.current_print();
	t2.current_print();

	// update_time(&t1, 22, 23, 21);
	t1.update_time(9, 47, 13);
	t2.update_time(11, 40, 12);
	// current_print(t1);
	t1.current_print();
	t2.current_print();

	return 0;
}
