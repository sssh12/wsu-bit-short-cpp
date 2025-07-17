#pragma once
class MyFile {
private:
	static string fileName;

public:
	static void Load(MyArr* pmembers);
	static void Save(MyArr& members);
};

