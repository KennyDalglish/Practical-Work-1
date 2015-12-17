// ConsoleApplication11.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "Practical.h"

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Rus");
	Practical obj;
	obj.doubleFigures();
	obj.digital(67);
	obj.errorProgrammCode();
	obj.numbersGame();
	obj.random(6);
	system("pause");
	return 0;
}

