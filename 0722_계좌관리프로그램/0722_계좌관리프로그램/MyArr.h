#pragma once

#define ARR_MAX 10
class MyArr {
private:
	void* base[ARR_MAX];
	int size;
	int max;

public:
	MyArr();
	~MyArr();

public:
	int getSize() const;

	int getMax() const;

	void* getData(int idx);

public:
	void PushBack(void* value);

	void Erase(int idx);
};
