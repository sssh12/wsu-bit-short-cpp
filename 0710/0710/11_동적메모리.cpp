/*
C 언어	: malloc()	 / free() 함수
C++ 언어: new 연산자 / delete 연산자
*/
#include <iostream>
using namespace std;

void exam1();
void exam2();

int main() {
	//exam1();
	exam2();

	return 0;
}

void exam1() {
	int* p1 = (int*)malloc(sizeof(int));	// 힙 메모리에 정수 1개 저장 공간 생성

	*p1 = 10;

	free(p1);	// 메모리 해제

	// ------------------------------------------------------------------------------------

	int* p2 = new int;						// 힙 메모리에 정수 1개 저장 공간 생성

	*p2 = 10;

	delete p2;	// 메모리 해제
}

void exam2() {
	int* p1 = new int;		// int 1개, 더미 값
	int* p2 = new int(3);	// int 1개, 3으로 초기화
	int* p3 = new int[3];	// int 3개, 더미 값, 동적 배열

	cout << *p1 << endl;	// 더미 값
	cout << *p2 << endl;	// 3
	
	p3[0] = 1;
	p3[1] = 2;
	p3[2] = 3;

	// 컴파일러는 p1의 타입이 무엇인지가 중요하다 !!
	delete p1;		// 4 byte 삭제
	delete p2;		// 4 byte 삭제
	//delete p3;	// 4 byte 삭제 ?? 사용 X
	delete[] p3;	// 12 byte 삭제   사용 O
}