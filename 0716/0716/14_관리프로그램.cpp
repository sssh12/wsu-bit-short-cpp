#include <iostream>
#include <conio.h>
using namespace std;

// Member Ŭ����
class Member {
	// ��� �ʵ�
private:
	string name;
	int age;
	string phone;

	// ������ & �Ҹ���
public:
	Member(string _name, int _age, string _phone) :
		name(_name), age(_age), phone(_phone) {
	}
	~Member() {
	}

	// get & set �޼���
public:
	string getName() const {
		return name;
	}

	int getAge() const {
		return age;
	}

	string getPhone() const {
		return phone;
	}

	void setAge(int _age) {
		age = _age;
	}

	void setPhone(string _phone) {
		phone = _phone;
	}

	// ��� �޼���
public:
	void PrintLn() const {
		cout << "[��    ��]: " << name << endl;
		cout << "[��    ��]: " << age << endl;
		cout << "[��ȭ��ȣ]: " << phone << endl;
	}

	void Print() const {
		cout << "�̸�: " << name << "\t" << "����: " << age;
		cout << "\t" << "��ȭ��ȣ: " << phone << endl;
	}
};

// MyPrint Ŭ����
class MyPrint {
public:
	static void Logo() {
		system("cls");
		cout << "************************************************************************" << endl;
		cout << "2025�г⵵ 1�б�" << endl;
		cout << "C++ ��� ȸ�� ���� ���α׷�" << endl;
		cout << "2025-07-16" << endl;
		cout << "������" << endl;
		cout << "************************************************************************" << endl;
		system("pause");
	}

	static char Menu() {
		cout << "************************************************************************" << endl;
		cout << "[1] ȸ�� ����(insert)" << endl;
		cout << "[2] ȸ�� �˻�(select)" << endl;
		cout << "[3] ȸ�� ����(update)" << endl;
		cout << "[4] ȸ�� ����(delete)" << endl;
		cout << "[5] ���α׷� ����(exit)" << endl;
		cout << "************************************************************************" << endl;
		return _getch();

	}

	static void Ending() {
		system("cls");
		cout << "************************************************************************" << endl;
		cout << "���α׷��� �����մϴ�." << endl;
		cout << "************************************************************************" << endl;
		system("pause");
	}
};

// MyInput Ŭ����
class MyInput {
public:
	static int InputInteger(string msg) {
		int value;
		cout << msg << ": ";
		cin >> value;
		return value;
	}

	static float InputFloat(string msg) {
		float value;
		cout << msg << ": ";
		cin >> value;
		return value;
	}

	static char InputChar(string msg) {
		char value;
		cout << msg << ": ";
		cin >> value;
		return value;
	}

	static string InputString(string msg) {
		string value;
		cout << msg << ": ";
		cin >> value;
		return value;
	}
};

// MyArr Ŭ����
#define ARR_MAX 10
class MyArr {
private:
	void* arr[ARR_MAX];		// void*�� �����ϴ� �迭
	int size;
	int max;

public:
	MyArr() : size(0), max(ARR_MAX) {
		for (int i = 0; i < ARR_MAX; i++) {
			arr[i] = NULL;		// #define NULL 0
		}
	}
	~MyArr() {
		for (int i = 0; i < size; i++) {
			delete arr[i];
		}
	}

public:
	int getSize() const {
		return size;
	}

	int getMax() const {
		return max;
	}

	void* getData(int idx) {
		return arr[idx];
	}

public:
	bool PushBack(void* value) {
		if (max <= size) {
			return false;
		}
		arr[size] = value;
		size++;

		return true;
	}

	bool Erase(int idx) {
		if (idx < 0 || idx >= size) {
			return false;
		}

		for (int i = idx; i < size - 1; i++) {
			arr[i] = arr[i + 1];
		}
		size--;
		return true;
	}
};


// MyCon Ŭ����
class Control {
private:
	MyArr members;			// �迭 ��ü�� �����ڸ� ȣ���ϸ� �ʱ�ȭ�ȴ�.

public:
	Control() {
		// file_load();
	}
	~Control() {
		// file_save();
	}

public:
	void InsertMember() {
		printf("[insert]\n\n");

		string name = MyInput::InputString("�̸� �Է�");
		int age = MyInput::InputInteger("���� �Է�");
		string phone = MyInput::InputString("��ȭ��ȣ �Է�");

		Member* member = new Member(name, age, phone);

		if (members.PushBack(member)) {	// *****
			printf("����Ǿ����ϴ�.\n");
		}
		else {
			printf("���� ����(overflow)\n");
		}


	}
	void SelectMember() {
		printf("[select]\n\n");

		string name = MyInput::InputString("�̸� �Է�");

		int idx = NameToIdx(name);

		if (idx != -1) {
			Member* pmember = (Member*)members.getData(idx);

			pmember->PrintLn();	
		}
		else {
			printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
		}

	}
	void UpdateMember() {
		printf("[update]\n\n");

		string name = MyInput::InputString("�̸� �Է�");

		int idx = NameToIdx(name);

		if (idx != -1) {
			int age = MyInput::InputInteger("������ ����");
			string phone = MyInput::InputString("������ ��ȭ��ȣ");

			Member* pmember = (Member*)members.getData(idx);
			pmember->setAge(age);
			pmember->setPhone(phone);

			printf("����Ǿ����ϴ�.\n");
		}
		else {
			printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
		}
	}
	void DeleteMember() {
		printf("[delete]\n\n");

		string name = MyInput::InputString("�̸� �Է�");

		int idx = NameToIdx(name);

		if (idx != -1) {
			members.Erase(idx);

			printf("�����Ǿ����ϴ�.\n");
		}
		else {
			printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
		}
	}

	void PrintAll() {
		for (int i = 0; i < members.getSize(); i++) {
			printf("[%d] ", i);
			Member* pmember = (Member*)members.getData(i);
			pmember->Print();
		}
		printf("------------------------------------------------------------------------\n");
	}

private:
	int NameToIdx(string name) {
		for (int i = 0; i < members.getSize(); i++) {
			Member* member = (Member*)members.getData(i);

			if (member->getName() == name) {
				return i;
			}
		}
		return -1;
	}
};

int main() {
	return 0;
}