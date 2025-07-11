/*
[규칙] 데이터 멤버는 절대로 외부 접근을 허용하지 않는다.
	   불안정해지는 것을 방지(잘못된 값이 저장되는 것을 방지)
*/
#include <iostream>
using namespace std;

struct tv {
	int volume;			// 0 ~ 50

private:
	int volume1;		// 0 ~ 50
public:
	// 제공되는 메서드를 통해서 간접적으로 값을 변경
	void updateVolume(int v) {
		if ((v >= 0) && (v < 50)) {
			volume1 = v;
		}
	}
};

int main() {
	tv t1;

	t1.volume = 5555;		// 공개되었을 때 비정상적인 데이터 저장을 막을 수 없다.
	
	//t1.volume1 = 5555;	// 접근할 수 없다.
	t1.updateVolume(5555);	// 잘못된 값을 전달한다면?

	return 0;
}