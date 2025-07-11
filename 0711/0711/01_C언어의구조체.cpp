// 현재 시간을 출력하고, 시간을 변경할 수 있다.
#include <iostream>
using namespace std;

// 데이터만 캡슐화 대상
struct my_time {
	int hour;
	int min;
	int sec;
};

/*
--------------------------------------
200번지			ptime		[100번지]
--------------------------------------
<current_time stack>
*/
void current_time(my_time* ptime) {
	ptime->hour = 21;
	ptime->min = 30;
	ptime->sec = 21;
}

/*
--------------------------------------
308번지			t.sec		21
304번지			t.min		30	
300번지			t.hour		21
--------------------------------------
<current_print stack>
*/
void current_print(my_time t) {
	cout << t.hour << ":";
	cout << t.min << ":";
	cout << t.sec << endl;
}

void update_time(my_time* ptime, int h, int m, int s) {
	ptime->hour = h;
	ptime->min = m;
	ptime->sec = s;
}

/*
--------------------------------------
108번지			t1.sec			21
104번지			t1.min			30
100번지			t1.hour			21
--------------------------------------
<main stack>
*/
int main() {
	my_time t1;  // 변수 선언 -> 메모리 생성

	current_time(&t1);
	current_print(t1);

	update_time(&t1, 22, 23, 21);
	current_print(t1);

	return 0;
}
