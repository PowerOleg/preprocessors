#include <iostream>
#define MODE 1
#ifndef MODE
#error ���� ������������� ���������� MODE
#endif

int add(int var1, int var2)
{
	return var1 + var2;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");
	#if MODE == 0
		std::cout << "������� � ������������� ������" << std::endl;
	#else MODE == 1
		std::cout << "������� � ������ ������" << std::endl;
		int var1 = 0;
		std::cout << "������� ����� 1: ";
		std::cin >> var1;
		int var2 = 0;
		std::cout << "������� ����� 2: ";
		std::cin >> var2;
		std::cout << "��������� ��������: " << add(var1, var2);
	#endif
	
	return 0;
}