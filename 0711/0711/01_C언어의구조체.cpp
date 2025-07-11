// ���� �ð��� ����ϰ�, �ð��� ������ �� �ִ�.
#include <iostream>
using namespace std;

// �����͸� ĸ��ȭ ���
struct my_time {
	int hour;
	int min;
	int sec;
};

/*
--------------------------------------
200����			ptime		[100����]
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
308����			t.sec		21
304����			t.min		30	
300����			t.hour		21
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
108����			t1.sec			21
104����			t1.min			30
100����			t1.hour			21
--------------------------------------
<main stack>
*/
int main() {
	my_time t1;  // ���� ���� -> �޸� ����

	current_time(&t1);
	current_print(t1);

	update_time(&t1, 22, 23, 21);
	current_print(t1);

	return 0;
}
