#include <iostream>
#include <vector>		// vector 컨테이너(데이터 저장소)
using namespace std;

void sample_print(vector<int>& rvec) {
	cout << "max(cap): " << rvec.capacity() << " / ";
	cout << "size: " << rvec.size() << " -> ";

	for (int i = 0; i < rvec.size(); i++) {
		int value = rvec[i];

		cout << value << ", ";
	}

	cout << endl;
}

// 저장 사용(공간 하나를 더 생성하고 그 공간에 값을 저장한다.)
void sample_insert1(vector<int>& rvec1, vector<int>& rvec2) {
	for (int i = 1; i <= 5; i++) {
		rvec1.push_back(i);
		rvec2.push_back(i);
	}
	sample_print(rvec1);
	sample_print(rvec2);
}

// 저장 사용(존재하는 공간 중 원하는 위치에 값을 저장한다.)
// 해당 위치에 있던 값은 뒤로 밀린다.(공간이 생성됨)
void sample_insert2(vector<int>& rvec1, vector<int>& rvec2) {
	// 0번째 인덱스 위치에 2를 저장
	rvec1.insert(rvec1.begin()+2, 55);
	rvec2.insert(rvec2.begin()+2, 55);

	sample_print(rvec1);
	sample_print(rvec2);
}

// 직접 검색
void sample_select1(vector<int>& rvec1, vector<int>& rvec2) {
	for (int i = 0; i < rvec1.size(); i++) {
		int value1 = rvec1[i];		// rvec1.getData(i)

		if (value1 == 3) {
			cout << "찾음: " << value1 << endl;
		}
	}

	for (int i = 0; i < rvec2.size(); i++) {
		int value2 = rvec2[i];		// rvec2.getData(i)

		if (value2 == 3) {
			cout << "찾음: " << value2 << endl;
		}
	}
}

// find 함수 활용
void sample_select2(vector<int>& rvec1, vector<int>& rvec2) {
	// iterator: 저장 공간을 가리키는 주소
	vector<int>::iterator itr1;
	vector<int>::iterator itr2;

	itr1 = find(rvec1.begin(), rvec1.end(), 3);
	itr2 = find(rvec2.begin(), rvec2.end(), 3);

	if (itr1 != rvec1.end()) {
		int value = *itr1;
		cout << "찾은 값: " << value << endl;
	}
	else {
		cout << "못 찾음" << endl;
	}

	if (itr2 != rvec2.end()) {
		int value = *itr2;
		cout << "찾은 값: " << value << endl;
	}
	else {
		cout << "못 찾음" << endl;
	}
}

// 삭제
void sample_delete(vector<int>& rvec1, vector<int>& rvec2) {
	// 삭제할 주소(이터레이터)
	rvec1.erase(rvec1.begin() + 3);
	rvec2.erase(rvec2.begin() + 3);

	sample_print(rvec1);
	sample_print(rvec2);
}

int main() {
	vector<int> vec1(5);
	vector<int> vec2;

	sample_print(vec1);
	sample_print(vec2);

	cout << "\n1 ~ 5 저장" << endl;
	sample_insert1(vec1, vec2);

	cout << "\n3 저장" << endl;
	sample_insert2(vec1, vec2);

	cout << "\n검색(select)" << endl;
	sample_select1(vec1, vec2);
	sample_select2(vec1, vec2);

	cout << "\n삭제(delete)" << endl;
	sample_delete(vec1, vec2);

	return 0;
}