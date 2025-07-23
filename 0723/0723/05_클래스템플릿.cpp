/*
������ �뵵 Ŭ����
- ���ø� Ŭ����: Ŭ������ ����
  ����: MyArr
  ����: MyArr<T>
  * �������� �̸��� �Ҹ����� �̸��� ���� �̸��� ���󰣴�.
	MyArr, ~MyArr
*/
#include <iostream>
using namespace std;

#define ARR_MAX 10

template <typename T>
class MyArr {
private:
	T base[ARR_MAX];		// **
	int max;
	int size;

public:
	MyArr();
	~MyArr();

public:
	int getMax() const;
	int getSize() const;
	T getData(int idx);		// **

public:
	void PushBack(T value);	// **
	void Erase(int idx);
};

template <typename T>
MyArr<T>::MyArr(): size(0), max(ARR_MAX) {
	for (int i = 0; i < ARR_MAX; i++) {
		base[i] = NULL;   //#define NULL 0 
	}
}

template <typename T>
MyArr<T>::~MyArr() {
	
}

template <typename T>
int MyArr<T>::getMax() const {
	return max;
}

template <typename T>
int MyArr<T>::getSize() const {
	return size;
}

template <typename T>
T MyArr<T>::getData(int idx) {
	if (idx < 0 || idx >= size)
		throw "�߸��� �ε���";

	return base[idx];
}

template <typename T>
void MyArr<T>::PushBack(T value) {
	if (max <= size)
		throw "������� ����";

	base[size] = value;
	size++;
}

template <typename T>
void MyArr<T>::Erase(int idx) {
	//�߸��� �ε��� 
	if (idx < 0 || idx >= size)
		throw "�߸��� �ε���";

	for (int i = idx; i < size - 1; i++) {
		base[i] = base[i + 1];
	}
	size--;
}

int main() {
	MyArr<int> arr1;
	arr1.PushBack(10);
	arr1.PushBack(20);
	cout << arr1.getData(0) << endl;	// 10

	MyArr<int*> arr2;
	arr2.PushBack(new int(10));
	arr2.PushBack(new int(20));

	int* value = arr2.getData(1);
	cout << *value << endl;				// 20

	return 0;
}