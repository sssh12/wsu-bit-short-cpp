// 클래스명으로 접근 가능한 메서드
#include <iostream>
using namespace std;

// MyCal 클래스는 객체를 만들 필요가 있을까?
// 관리할 데이터가 없기 때문에 만들 필요 없다.
class MyCal {
public:
	static int sum(int n1, int n2) {
		return n1 + n2;
	}
	static int sub(int n1, int n2) {
		return n1 - n2;
	}
};

int main() {
	cout << MyCal::sum(10, 5) << endl;
	cout << MyCal::sub(10, 5) << endl;

	return 0;
}