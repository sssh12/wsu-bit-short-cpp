#include <iostream>
#include <algorithm>	// STL에서 제공해주는 알고리즘 함수 라이브러리
using namespace std;

int main() {
	int arr[10] = { 12, 24, 36, 47, 51, 68, 74, 89, 93, 128 };

	// STL에서 제공되는 알고리즘 함수
	int* ret = find(arr, arr + 10, 36);

	if (ret != arr + 10) {
		cout << *ret << endl;
	}
	else {
		cout << "없음" << endl;
	}

	sort(arr, arr + 10);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\t";
	}

	return 0;
}