/*
[��Ģ] ������ ����� ����� �ܺ� ������ ������� �ʴ´�.
	   �Ҿ��������� ���� ����(�߸��� ���� ����Ǵ� ���� ����)
*/
#include <iostream>
using namespace std;

struct tv {
	int volume;			// 0 ~ 50

private:
	int volume1;		// 0 ~ 50
public:
	// �����Ǵ� �޼��带 ���ؼ� ���������� ���� ����
	void updateVolume(int v) {
		if ((v >= 0) && (v < 50)) {
			volume1 = v;
		}
	}
};

int main() {
	tv t1;

	t1.volume = 5555;		// �����Ǿ��� �� ���������� ������ ������ ���� �� ����.
	
	//t1.volume1 = 5555;	// ������ �� ����.
	t1.updateVolume(5555);	// �߸��� ���� �����Ѵٸ�?

	return 0;
}