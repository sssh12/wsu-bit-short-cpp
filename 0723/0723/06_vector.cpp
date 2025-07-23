#include <iostream>
#include <vector>		// vector �����̳�(������ �����)
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

// ���� ���(���� �ϳ��� �� �����ϰ� �� ������ ���� �����Ѵ�.)
void sample_insert1(vector<int>& rvec1, vector<int>& rvec2) {
	for (int i = 1; i <= 5; i++) {
		rvec1.push_back(i);
		rvec2.push_back(i);
	}
	sample_print(rvec1);
	sample_print(rvec2);
}

// ���� ���(�����ϴ� ���� �� ���ϴ� ��ġ�� ���� �����Ѵ�.)
// �ش� ��ġ�� �ִ� ���� �ڷ� �и���.(������ ������)
void sample_insert2(vector<int>& rvec1, vector<int>& rvec2) {
	// 0��° �ε��� ��ġ�� 2�� ����
	rvec1.insert(rvec1.begin()+2, 55);
	rvec2.insert(rvec2.begin()+2, 55);

	sample_print(rvec1);
	sample_print(rvec2);
}

// ���� �˻�
void sample_select1(vector<int>& rvec1, vector<int>& rvec2) {
	for (int i = 0; i < rvec1.size(); i++) {
		int value1 = rvec1[i];		// rvec1.getData(i)

		if (value1 == 3) {
			cout << "ã��: " << value1 << endl;
		}
	}

	for (int i = 0; i < rvec2.size(); i++) {
		int value2 = rvec2[i];		// rvec2.getData(i)

		if (value2 == 3) {
			cout << "ã��: " << value2 << endl;
		}
	}
}

// find �Լ� Ȱ��
void sample_select2(vector<int>& rvec1, vector<int>& rvec2) {
	// iterator: ���� ������ ����Ű�� �ּ�
	vector<int>::iterator itr1;
	vector<int>::iterator itr2;

	itr1 = find(rvec1.begin(), rvec1.end(), 3);
	itr2 = find(rvec2.begin(), rvec2.end(), 3);

	if (itr1 != rvec1.end()) {
		int value = *itr1;
		cout << "ã�� ��: " << value << endl;
	}
	else {
		cout << "�� ã��" << endl;
	}

	if (itr2 != rvec2.end()) {
		int value = *itr2;
		cout << "ã�� ��: " << value << endl;
	}
	else {
		cout << "�� ã��" << endl;
	}
}

// ����
void sample_delete(vector<int>& rvec1, vector<int>& rvec2) {
	// ������ �ּ�(���ͷ�����)
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

	cout << "\n1 ~ 5 ����" << endl;
	sample_insert1(vec1, vec2);

	cout << "\n3 ����" << endl;
	sample_insert2(vec1, vec2);

	cout << "\n�˻�(select)" << endl;
	sample_select1(vec1, vec2);
	sample_select2(vec1, vec2);

	cout << "\n����(delete)" << endl;
	sample_delete(vec1, vec2);

	return 0;
}