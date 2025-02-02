#include <iostream> 
#include <Windows.h> 

int main()
{
	//std::cout << "Hello World!" << std::endl; 
	//std::cout << std::endl;
	//std::cout << "i do not like c++";  

	// /n

	/*setlocale(LC_ALL, "rus");

	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);


	std::cout << "Привіт, світ!\n";
	std::cout << "Привет, мир!\n";*/

	std::cout << R"(h
	e
	l
	l
	o)";

	int number1, number2, sum;

	int myAge = 23;

	const double PI = 3.1415;
	int number = 3;

	const int a = 13;
	const int b(13);
	const int v{ 13 };
	const int d = {13};


	std::cout << myAge << std::endl;
	std::cout << "\nPi + 3 = " << PI + number << std::endl;

	std::cout << "\nEnter first num: ";
	std::cin >> number1;

	std::cout << "\nenter second num:";
	std::cin >> number2;

	sum = number1 + number2;

	std::cout << "\nThese sum is " << sum << std::endl;

	return 0;
}