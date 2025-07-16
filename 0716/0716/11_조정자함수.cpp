#include <iostream>
using namespace std;

ostream& twotab(ostream& os) {
	printf("\t\t");
	return os;
}

int main() {
	cout << 10 << twotab << 20 << endl;

	cout << oct << 10 << endl;
	cout << hex << 10 << endl;

	return 0;
}