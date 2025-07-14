// �л��� ������ �۾��� ����.
// �л�, ��: ������ ����? ��
#include <iostream>
using namespace std;

// ��ü�� �߻�ȭ ������ ���� ���������.
class Pen {
private:
	string color;
	int width;

public:
	Pen(string _color, int _width) {
		color = _color;
		width = _width;
	}
	~Pen() {}

public:
	string getColor() {
		return color;
	}

	int getWidth() {
		return width;
	}

public:
	void Write(string msg) {
		cout << "[" << color << "]" << "\t";
		cout << msg << endl;
	}

	void Print() {
		cout << color << "\t" << width << endl;
	}
};

class Student {
private:
	//Pen pen;	// ����(�л��� ���� ����)
	Pen* pen;
	
public:
	// �л��� ������ �� pen�� �����ϰ� ���� ���� ����
	Student() {
		pen = NULL;
	}
	~Student() {

	}

public:
	void penUp(Pen* _pen) {
		pen = _pen;
		cout << pen->getColor() << "���� �տ� ���." << endl;
	}

	void Write() {
		string msg;		
		cout << "�޼��� �Է�: ";  cin >> msg;

		// pen�� �������� ���� �۾��⸦ ��û
		if (pen != NULL) {
			pen->Write(msg);	// ***
		}
		else {
			cout << "���� ����." << endl;
		}
	}

	void penDown() {
		cout << pen->getColor() << "���� ��������." << endl;
		pen = NULL;
	}
};

int main() {
	// main stack
	Pen redpen("����", 1);

	// heap 
	Pen* bluepen = new Pen("�Ķ�", 2);

	Student stu1;
	Student* stu2 = new Student;

	stu1.penUp(&redpen);

	stu1.Write();

	stu1.penDown();

	stu1.Write();

	return 0;
}