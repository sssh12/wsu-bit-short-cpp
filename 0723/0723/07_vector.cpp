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

// ���� �˻�
void sample_select1(vector<int*>& rvec) {
	for (int i = 0; i < rvec.size(); i++) {
		int* value = rvec[i];

		if (*value == 3) {		// **
			cout << "ã��: " << *value << endl;
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

// find �Լ� Ȱ��
void sample_select2(vector<int*>& rvec) {
	// iterator: ���� ������ ����Ű�� �ּ�
	vector<int*>::iterator itr;

	itr = find_if(rvec.begin(), rvec.end(), isCheck);

	if (itr != rvec.end()) {
		int* value = *itr;
		cout << "ã�� ��: " << *value << endl;
	}
	else {
		cout << "�� ã��" << endl;
	}
}

// �Լ� ��ü
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
	// iterator: ���� ������ ����Ű�� �ּ�
	vector<int*>::iterator itr;

	itr = find_if(rvec.begin(), rvec.end(), FindValue(3));

	if (itr != rvec.end()) {
		int* value = *itr;
		cout << "ã�� ��: " << *value << endl;
	}
	else {
		cout << "�� ã��" << endl;
	}
}

// ���ٽ�
void sample_select4(vector<int*>& rvec) {
	// iterator: ���� ������ ����Ű�� �ּ�
	vector<int*>::iterator itr;
	
	int number = 3;
	itr = find_if(rvec.begin(), rvec.end(), 
		[number](int* p) { return (*p == number); });

	if (itr != rvec.end()) {
		int* value = *itr;
		cout << "ã�� ��: " << *value << endl;
	}
	else {
		cout << "�� ã��" << endl;
	}
}

// ����
void sample_delete(vector<int*>& rvec) {
	// ������ �ּ�(���ͷ�����)
	rvec.erase(rvec.begin() + 3);

	sample_print(rvec);
}

int main() {
	vector<int*> vec1;
	sample_print(vec1);

	cout << "\n1 ~ 5 ����(insert)" << endl;
	sample_insert(vec1);

	cout << "\n�˻�(select)" << endl;
	sample_select1(vec1);	// ���� �˻�
	sample_select2(vec1);	// find_if: ���� �Լ�
	sample_select3(vec1);	// find_if: �Լ� ��ü
	sample_select4(vec1);	// find_if: ���ٽ�

	cout << "\n����(delete)" << endl;
	sample_delete(vec1);


	return 0;
}