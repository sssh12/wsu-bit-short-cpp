#include <stdio.h>

namespace mystd {
	class myostream {
	public:
		myostream& operator<<(int value) {
			printf("%d", value);
			return *this;
		}

		myostream& operator<<(char value) {
			printf("%c", value);
			return *this;
		}

		myostream& operator<<(myostream& (*func)(myostream& os)) {
			func(*this);
			return *this;
		}
	};

	myostream& myendl(myostream& os) {
		printf("\n");
		fflush(stdout);
		return os;
	}

	myostream mycout;
}

using namespace mystd;

int main() {
	mycout << 10 << myendl;			// mycout.operator<<(10)
	mycout << 'A' << myendl;
	mycout << 10 << 'A' << myendl;

	return 0;
}