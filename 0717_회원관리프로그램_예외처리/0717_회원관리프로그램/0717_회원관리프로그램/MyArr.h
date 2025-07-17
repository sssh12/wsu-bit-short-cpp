#pragma once

// MyArr Ŭ����
#define ARR_MAX 10
class MyArr {
private:
	void* arr[ARR_MAX];		// void*�� �����ϴ� �迭
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
	bool PushBack(void* value);

	bool Erase(int idx);
};
