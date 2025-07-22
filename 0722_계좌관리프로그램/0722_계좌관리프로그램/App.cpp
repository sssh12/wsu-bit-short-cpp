#include "std.h"

App::App() {
	App::Init();
}

App::~App() {
	App::Exit();
}

void App::Run() {
	while (1) {
		system("cls");
		bank.PrintAllAccount();
		char input = MyPrint::Menu();
		switch (input) {
		case '1': bank.MakeAccount(); break;
		case '2': bank.SelectAccount(); break;
		case '3': bank.Deposit(); break;
		case '4': bank.WithDraw(); break;
		case '5': bank.DeleteAccount(); break;
		case '6': return;
		}
		system("pause");
	}
}

void App::Init() {
	MyPrint::Logo();
}

void App::Exit() {
	MyPrint::Ending();
}