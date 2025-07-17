#include "std.h"

MyArr::MyArr(): size(0), max(ARR_MAX) {
	for (int i = 0; i < ARR_MAX; i++) {
		arr[i] = NULL;		
	}
}
MyArr::~MyArr() {
	for (int i = 0; i < size; i++) {
		delete arr[i];
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
		throw "잘못된 인덱스";
	}
	return arr[idx];
}

bool MyArr::PushBack(void* value) {
	if (max <= size) {
		throw "저장 공간이 부족합니다.";
	}
	arr[size] = value;
	size++;

	return true;
}

bool MyArr::Erase(int idx) {
	if (idx < 0 || idx >= size) {
		throw "잘못된 인덱스";
	}

	for (int i = idx; i < size - 1; i++) {
		arr[i] = arr[i + 1];
	}
	size--;
	return false;
}
