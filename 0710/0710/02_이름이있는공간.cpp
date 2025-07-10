// 목적: 공간을 구분 -> 충돌 방지
// 동일한 이름의 함수, 공간이 다르다.: 문제 없다.
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
	// 1. 이름이 있는 공간의 이름을 직접 사용 (불편)
	mystd::func1();
	mystd1::func1();

	// 2. 미리 func1은 mystd라는 공간에 있는 것을 사용
	//	  내가 필요한 키워드를 미리 다 작성
	using mystd::func1;

	func1();
	func1();
	func1();

	mystd1::func1();

	// 3. 무조건 mystd 공간에 있는 것을 사용.
	using namespace mystd;

	return 0;
}