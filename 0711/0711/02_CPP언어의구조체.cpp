// ���� �ð��� ����ϰ�, �ð��� ������ �� �ִ�.
#include <iostream>
using namespace std;

// ������ + �����͸� �����ϴ� �Լ��� ���� ĸ��ȭ
// C ���  : ����ü ����
// C++ ���: ��ü ����
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
	// C ���  : ���� ����				  -> �޸� ����
	// C++ ���: ��ü ����(�ν��Ͻ� ����) -> �޸� ����
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
