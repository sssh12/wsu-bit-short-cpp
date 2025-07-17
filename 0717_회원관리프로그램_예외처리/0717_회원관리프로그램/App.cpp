#include "std.h"

void App::Init() {
	MyPrint::Logo();
}

void App::Run() {
	while (1) {
		system("cls");
		con.PrintAll();
		char input = MyPrint::Menu();
		switch (input) {
			case '1': con.InsertMember(); break;
			case '2': con.SelectMember(); break;
			case '3': con.UpdateMember(); break;
			case '4': con.DeleteMember(); break;
			case '5': return;
		}
		system("pause");
	}
}

void App::Exit() {
	MyPrint::Ending();
}

