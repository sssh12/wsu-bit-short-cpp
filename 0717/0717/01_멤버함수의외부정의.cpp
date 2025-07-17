#include <iostream>
using namespace std;

class Sample {
private:
    static int snum;
    int num;
public:
    Sample(int _num);
    ~Sample();

public:
    void func1(int n1);
    void func2(int n2) const;
    static void func3(int n3);
    void func4() {

    }
};

int Sample::snum = 0;

Sample::Sample(int _num) : num(_num) {
}
Sample::~Sample() {
}

void Sample::func1(int n1) {
    num = n1;
}
void Sample::func2(int n2) const {
}
void Sample::func3(int n3) {

}

int main() {
    Sample s1(10);
    

	return 0;
}