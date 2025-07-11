/*
목적: 객체 초기화
특징: 특수한 형태의 멤버 함수
	  - 리턴 타입		: X
	  - 이름			: 약속(타입 키워드 동일)
	  - 매개 변수 리스트: O(0 ~ N) -> 오버 로딩 가능
	  * 하나의 클래스 내에 여러개의 생성자를 정의할 수 있다.
	   
	  객체 생성 시 자동으로 호출된다.(내가 직접 호출할 수 없다.)
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
	// 객체 생성
	Sample s1;
	Sample s2(10);

	return 0;
}