// C 언어에서 배운 모든 문법들을 사용할 수 있다.
//#include <stdio.h>	// C 언어 표준 h 파일
#include <iostream>		// C++ 언어 표준 h 파일 .h 생략

void exam1();
void exam2();
void exam3();
void exam4();

int main() {
	//exam1();
	//exam2();
	//exam3();
	exam4();

	return 0;
}

void exam1() {
	printf("Hello, World!\n");
}

void exam2() {
	// 기본형 변수 선언
	int num = 10;
	char ch = 'A';
	float fnum = 10.123f;

	// C에서 제공하는 함수를 이용한 출력 (타입별 서식이 필요)
	printf("C\n\n");

	printf("%d\n", num);
	printf("%c\n", ch);
	printf("%.3f\n", fnum);
	printf("%d, %c, %.3f\n", num, ch, fnum);

	printf("\n");

	// C++에서 제공하는 [출력 객체(object)]와 [출력 연산자]를 이용
	// std::cout -> std라는 이름의 공간 안에 존재하는 cout(출력 객체)
	// <<		 -> 출력 연산자
	// std::endl -> std라는 이름의 공간 안에 존재하는 endl(함수)
	//				해당 함수의 기능은 \n + fflush(stdout) -> 바로 출력해라
	// ::		 -> scope 연산자 (범위 연산자): 누구 꺼냐?
	std::cout << "C++" << "\n\n";
	std::cout << num << "\n";
	std::cout << ch << "\n";
	std::cout << fnum << std::endl;	
	std::cout << num << ", " << ch << ", " << fnum << std::endl;
}

void exam3() {
	// 기본형 변수 선언;
	int num;
	char ch;
	float fnum;

	printf("C 언어를 이용한 입력\n");
	printf("정수 입력: ");			scanf_s("%d", &num);	
	char dummy = getchar();
	printf("문자 입력: ");			scanf_s("%c", &ch, (int)sizeof(ch));
	printf("실수 입력: ");			scanf_s("%f", &fnum);

	printf("입력 결과: %d, %c, %.3f\n", num, ch, fnum);

	
	// 입력 객체: std::cin
	// 입력 연산자 >>
	std::cout << "\nC++ 언어를 이용한 입력\n" << std::endl;
	std::cout << "정수 입력: ";		std::cin >> num;
	std::cout << "문자 입력: ";		std::cin >> ch;
	std::cout << "실수 입력: ";		std::cin >> fnum;

	std::cout << "입력 결과: " << num << ", " << ch << ", " << fnum << std::endl;
}

void exam4() {
	// 문자열 객체 제공: 기본형 타입과 동일하게 사용
	std::string name;  // char name[20];
	int age;
	char gender;
	float weight;

	std::cout << "이름 입력: ";			std::cin >> name;
	std::cout << "나이 입력: ";			std::cin >> age;
	std::cout << "성별 입력(m/f): ";	std::cin >> gender;
	std::cout << "몸무게 입력: ";		std::cin >> weight;

	std::cout << std::endl;
	std::cout << "이  름: " << name << std::endl;
	std::cout << "나  이: " << age << std::endl;
	std::cout << "성  별: " << gender << std::endl;
	std::cout << "몸무게: " << weight << std::endl;
}