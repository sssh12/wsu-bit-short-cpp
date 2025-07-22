#pragma once

class MyFile {
private:
	static string filename;

public:
	static void LoadAccount(MyArr* paccounts);
	static void SaveAccount(MyArr& accounts);
};
