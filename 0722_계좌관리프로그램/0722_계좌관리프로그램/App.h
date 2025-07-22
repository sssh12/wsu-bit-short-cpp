#pragma once

class App {
	BankControl bank;

public:
	App();
	~App();

public:
	void Run();

private:
	void Init();
	void Exit();
};
