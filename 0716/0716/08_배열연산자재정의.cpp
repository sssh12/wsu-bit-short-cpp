#include <iostream>
using namespace std;

class MyArr {
private:
	int arr[5];

public:
	MyArr() {
		for (int i = 0; i < 5; i++) {
			arr[i] = i + 1;		// 1, 2, 3, 4, 5
		}
	}

public:
	int getDate(int idx) const {
		return arr[idx];
	}

	int operator[](int idx) const {
		return arr[idx];
	}
};

int main() {
	MyArr arr;
	int value = arr.getDate(1);

	value = arr[1];		// arr.operator[](1);

	cout << value << endl;

	return 0;
}