#include "std.h"

App::App()
{
	Init();
}

App::~App()
{
	Exit();
}

void App::Init()
{
	MyPrint::Logo();
}

void App::Exit()
{
	MyPrint::Ending();
}

void App::Run()
{
	while (true)
	{
		system("cls");
		bank.PrintAllAccount();
		switch (MyPrint::Menu())
		{
		case '1':  bank.MakeAccount();		break;
		case '2':  bank.SelectAccount();	break;
		case '3':  bank.Deposit();			break;
		case '4':  bank.WithDraw();			break;
		case '5':  bank.DeleteAccount();	break;
		case '6':  return;
		}
		system("pause");
	}
}
