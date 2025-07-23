#include "std.h"

void MyPrint::Logo()
{
	system("cls");		//<stdlib.h>
	cout << "********************************************" << endl;
	cout << "2025학년도 1학기" << endl;
	cout << "C++언어를 활용한 계좌 관리 프로그램" << endl;
	cout << "2025-07-23" << endl;
	cout << "오승하" << endl;
	cout << "********************************************" << endl;
	system("pause");
}

void MyPrint::Ending()
{
	system("cls");
	cout << "********************************************" << endl;
	cout << "프로그램을 종료합니다" << endl;
	cout << "********************************************" << endl;
	system("pause");
}

char MyPrint::Menu()
{
	cout << "********************************************" << endl;
	cout << "[1] 계좌 개설 기능(insert)" << endl;
	cout << "[2] 계좌 검색 기능(select)" << endl;
	cout << "[3] 계좌 입금 기능(update)" << endl;
	cout << "[4] 계좌 출금 기능(update)" << endl;
	cout << "[5] 계좌 삭제 기능(delete)" << endl;
	cout << "[6] 프로그램 종료(exit)" << endl;
	cout << "********************************************" << endl;
	return _getch();  //#include <conio.h>
}
