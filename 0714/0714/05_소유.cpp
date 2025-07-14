// 학생이 펜으로 글씨를 쓴다.
// 학생, 펜: 누구를 먼저? 펜
#include <iostream>
using namespace std;

// 객체는 추상화 과정을 통해 만들어진다.
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
	//Pen pen;	// 소유(학생이 펜을 소유)
	Pen* pen;
	
public:
	// 학생이 생성될 때 pen은 소유하고 있지 않은 상태
	Student() {
		pen = NULL;
	}
	~Student() {

	}

public:
	void penUp(Pen* _pen) {
		pen = _pen;
		cout << pen->getColor() << "펜을 손에 들다." << endl;
	}

	void Write() {
		string msg;		
		cout << "메세지 입력: ";  cin >> msg;

		// pen을 소유했을 때만 글쓰기를 요청
		if (pen != NULL) {
			pen->Write(msg);	// ***
		}
		else {
			cout << "펜이 없다." << endl;
		}
	}

	void penDown() {
		cout << pen->getColor() << "펜을 내려놓다." << endl;
		pen = NULL;
	}
};

int main() {
	// main stack
	Pen redpen("빨강", 1);

	// heap 
	Pen* bluepen = new Pen("파랑", 2);

	Student stu1;
	Student* stu2 = new Student;

	stu1.penUp(&redpen);

	stu1.Write();

	stu1.penDown();

	stu1.Write();

	return 0;
}