#include "std.h"

MyArr::MyArr() : size(0), max(ARR_MAX) {
	for (int i = 0; i < ARR_MAX; i++) {
		base[i] = NULL;
	}
}
MyArr::~MyArr() {
	for (int i = 0; i < size; i++) {
		delete base[i];
	}
}

int MyArr::getSize() const {
	return size;
}

int MyArr::getMax() const {
	return max;
}

void* MyArr::getData(int idx) {
	if (idx < 0 || idx >= size) {
		throw "�߸��� �ε���";
	}
	return base[idx];
}

void MyArr::PushBack(void* value) {
	if (max <= size) {
		throw "���� ������ �����մϴ�.";
	}
	base[size] = value;
	size++;

}

void MyArr::Erase(int idx) {
	if (idx < 0 || idx >= size) {
		throw "�߸��� �ε���";
	}

	for (int i = idx; i < size - 1; i++) {
		base[i] = base[i + 1];
	}
	size--;
}
