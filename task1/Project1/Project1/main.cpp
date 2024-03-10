#include <iostream>
#define MODE 1
#ifndef MODE
#error Есть необходимость определить MODE
#endif

int add(int var1, int var2)
{
	return var1 + var2;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");
	#if MODE == 0
		std::cout << "Работаю в тренировочном режиме" << std::endl;
	#else MODE == 1
		std::cout << "Работаю в боевом режиме" << std::endl;
		int var1 = 0;
		std::cout << "Введите число 1: ";
		std::cin >> var1;
		int var2 = 0;
		std::cout << "Введите число 2: ";
		std::cin >> var2;
		std::cout << "Результат сложения: " << add(var1, var2);
	#endif
	
	return 0;
}