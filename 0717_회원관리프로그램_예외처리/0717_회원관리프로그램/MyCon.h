#pragma once

// MyCon Ŭ����
class MyCon {
private:
	MyArr members;

public:
	MyCon();
	~MyCon();

public:
	void InsertMember();
	void SelectMember();
	void UpdateMember();
	void DeleteMember();

	void PrintAll();

private:
	int NameToIdx(string name);
};
