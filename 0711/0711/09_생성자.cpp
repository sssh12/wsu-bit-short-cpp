/*
����: ��ü �ʱ�ȭ
Ư¡: Ư���� ������ ��� �Լ�
	  - ���� Ÿ��		: X
	  - �̸�			: ���(Ÿ�� Ű���� ����)
	  - �Ű� ���� ����Ʈ: O(0 ~ N) -> ���� �ε� ����
	  * �ϳ��� Ŭ���� ���� �������� �����ڸ� ������ �� �ִ�.
	   
	  ��ü ���� �� �ڵ����� ȣ��ȴ�.(���� ���� ȣ���� �� ����.)
*/	
#include <iostream>
using namespace std;

class Sample {
public:
	Sample() {
		cout << "Sample()" << endl;
	}
	Sample(int n1) {
		cout << "Sample(int n1)" << endl;
	}
};

int main() {
	// ��ü ����
	Sample s1;
	Sample s2(10);

	return 0;
}