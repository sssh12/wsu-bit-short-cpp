#include <iostream>
#include <vector>		
using namespace std;

void sample_print(vector<int*>& rvec) {
	cout << rvec.capacity() << " / " << rvec.size() << " -> ";

	for (int i = 0; i < rvec.size(); i++) {
		int* value = rvec[i];

		cout << *value << ", ";
	}

	cout << endl;
}

void sample_insert(vector<int*>& rvec) {
	for (int i = 1; i <= 5; i++) {
		int* p = new int(i);
		rvec.push_back(p);
	}
	sample_print(rvec);
}

// 직접 검색
void sample_select1(vector<int*>& rvec) {
	for (int i = 0; i < rvec.size(); i++) {
		int* value = rvec[i];

		if (*value == 3) {		// **
			cout << "찾음: " << *value << endl;
			break;
		}
	}
}

bool isCheck(int* p) {
	if (*p == 3) {
		return true;
	}
	else {
		return false;
	}
}

// find 함수 활용
void sample_select2(vector<int*>& rvec) {
	// iterator: 저장 공간을 가리키는 주소
	vector<int*>::iterator itr;

	itr = find_if(rvec.begin(), rvec.end(), isCheck);

	if (itr != rvec.end()) {
		int* value = *itr;
		cout << "찾은 값: " << *value << endl;
	}
	else {
		cout << "못 찾음" << endl;
	}
}

// 함수 객체
class FindValue {
private:
	int value;

public:
	FindValue(int _value) : value(_value) {}
	// FindValue v;
	// v(10);		-> v.operator()(10);
	bool operator()(int* _value) {
		return (value == *_value);
	}
};

void sample_select3(vector<int*>& rvec) {
	// iterator: 저장 공간을 가리키는 주소
	vector<int*>::iterator itr;

	itr = find_if(rvec.begin(), rvec.end(), FindValue(3));

	if (itr != rvec.end()) {
		int* value = *itr;
		cout << "찾은 값: " << *value << endl;
	}
	else {
		cout << "못 찾음" << endl;
	}
}

// 람다식
void sample_select4(vector<int*>& rvec) {
	// iterator: 저장 공간을 가리키는 주소
	vector<int*>::iterator itr;
	
	int number = 3;
	itr = find_if(rvec.begin(), rvec.end(), 
		[number](int* p) { return (*p == number); });

	if (itr != rvec.end()) {
		int* value = *itr;
		cout << "찾은 값: " << *value << endl;
	}
	else {
		cout << "못 찾음" << endl;
	}
}

// 삭제
void sample_delete(vector<int*>& rvec) {
	// 삭제할 주소(이터레이터)
	rvec.erase(rvec.begin() + 3);

	sample_print(rvec);
}

int main() {
	vector<int*> vec1;
	sample_print(vec1);

	cout << "\n1 ~ 5 저장(insert)" << endl;
	sample_insert(vec1);

	cout << "\n검색(select)" << endl;
	sample_select1(vec1);	// 직접 검색
	sample_select2(vec1);	// find_if: 전역 함수
	sample_select3(vec1);	// find_if: 함수 객체
	sample_select4(vec1);	// find_if: 람다식

	cout << "\n삭제(delete)" << endl;
	sample_delete(vec1);


	return 0;
}