#pragma once

class MyFile
{
private:
	static string filename;
public:
	static void SaveAccount(vector<Account*>& accounts);
	static void LoadAccount(vector<Account*>& accounts);
};
