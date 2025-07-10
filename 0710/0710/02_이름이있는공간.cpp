// ����: ������ ���� -> �浹 ����
// ������ �̸��� �Լ�, ������ �ٸ���.: ���� ����.
#include <stdio.h>

namespace mystd {
	void func1() {
		printf("mystd::func1()\n");
	}
}

namespace mystd1 {
	void func1() {
		printf("mystd1::func1()\n");
	}
}

int main() {
	// 1. �̸��� �ִ� ������ �̸��� ���� ��� (����)
	mystd::func1();
	mystd1::func1();

	// 2. �̸� func1�� mystd��� ������ �ִ� ���� ���
	//	  ���� �ʿ��� Ű���带 �̸� �� �ۼ�
	using mystd::func1;

	func1();
	func1();
	func1();

	mystd1::func1();

	// 3. ������ mystd ������ �ִ� ���� ���.
	using namespace mystd;

	return 0;
}