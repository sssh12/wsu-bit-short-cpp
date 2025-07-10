// C ���� ��� ��� �������� ����� �� �ִ�.
//#include <stdio.h>	// C ��� ǥ�� h ����
#include <iostream>		// C++ ��� ǥ�� h ���� .h ����

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
	// �⺻�� ���� ����
	int num = 10;
	char ch = 'A';
	float fnum = 10.123f;

	// C���� �����ϴ� �Լ��� �̿��� ��� (Ÿ�Ժ� ������ �ʿ�)
	printf("C\n\n");

	printf("%d\n", num);
	printf("%c\n", ch);
	printf("%.3f\n", fnum);
	printf("%d, %c, %.3f\n", num, ch, fnum);

	printf("\n");

	// C++���� �����ϴ� [��� ��ü(object)]�� [��� ������]�� �̿�
	// std::cout -> std��� �̸��� ���� �ȿ� �����ϴ� cout(��� ��ü)
	// <<		 -> ��� ������
	// std::endl -> std��� �̸��� ���� �ȿ� �����ϴ� endl(�Լ�)
	//				�ش� �Լ��� ����� \n + fflush(stdout) -> �ٷ� ����ض�
	// ::		 -> scope ������ (���� ������): ���� ����?
	std::cout << "C++" << "\n\n";
	std::cout << num << "\n";
	std::cout << ch << "\n";
	std::cout << fnum << std::endl;	
	std::cout << num << ", " << ch << ", " << fnum << std::endl;
}

void exam3() {
	// �⺻�� ���� ����;
	int num;
	char ch;
	float fnum;

	printf("C �� �̿��� �Է�\n");
	printf("���� �Է�: ");			scanf_s("%d", &num);	
	char dummy = getchar();
	printf("���� �Է�: ");			scanf_s("%c", &ch, (int)sizeof(ch));
	printf("�Ǽ� �Է�: ");			scanf_s("%f", &fnum);

	printf("�Է� ���: %d, %c, %.3f\n", num, ch, fnum);

	
	// �Է� ��ü: std::cin
	// �Է� ������ >>
	std::cout << "\nC++ �� �̿��� �Է�\n" << std::endl;
	std::cout << "���� �Է�: ";		std::cin >> num;
	std::cout << "���� �Է�: ";		std::cin >> ch;
	std::cout << "�Ǽ� �Է�: ";		std::cin >> fnum;

	std::cout << "�Է� ���: " << num << ", " << ch << ", " << fnum << std::endl;
}

void exam4() {
	// ���ڿ� ��ü ����: �⺻�� Ÿ�԰� �����ϰ� ���
	std::string name;  // char name[20];
	int age;
	char gender;
	float weight;

	std::cout << "�̸� �Է�: ";			std::cin >> name;
	std::cout << "���� �Է�: ";			std::cin >> age;
	std::cout << "���� �Է�(m/f): ";	std::cin >> gender;
	std::cout << "������ �Է�: ";		std::cin >> weight;

	std::cout << std::endl;
	std::cout << "��  ��: " << name << std::endl;
	std::cout << "��  ��: " << age << std::endl;
	std::cout << "��  ��: " << gender << std::endl;
	std::cout << "������: " << weight << std::endl;
}