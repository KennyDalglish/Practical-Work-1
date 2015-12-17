#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <time.h>
#include <limits>
#include <assert.h>
#include "Practical.h"
using namespace std;


void Practical::random(int value)
{
	srand(static_cast< unsigned int > (time(NULL)));
	value = rand() % value + 1;
	cout << "Рандомное число: " << value << endl;
}
void Practical::digital(int value)
{
	cout << "До: " << value << endl;
	do
	{
		output_digital = (output_digital * 10) + (value % 10);
		value = value / 10;
	}
	while (value > 0);
	cout << "После: " << output_digital << endl;
}
void Practical::numbersGame()
{
	int value = 0;
	cout << "Введите число от 100 до 999" << endl;
	while (!(cin >> value) || value < 100 || value > 999)
	{
		cout << "Введите число от 100 до 999" << endl;

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	double nDigits = floor(log10(abs(value))) + 1;
	result_game = value * pow(10, nDigits) + value;
	result_game = result_game / 13;
	result_game = result_game / abs(value);
	cout << "Число = " << result_game << endl;
}
void Practical::errorProgrammCode()
{
	int
		value_one = 0,
		value_two = 0;
	cout << "Введите два числа: " << endl;
	cout << "Введите первое число: " << endl;
	cin >> value_one;
	cout << "Введите второе число: " << endl;
	cin >> value_two;
	div_result = ldiv(value_one, 100);
	resultMod = fmod(value_one, 1000 - 1);
	cout << "Div: " << div_result.quot << " | " << div_result.rem << endl;
	if (resultMod == 0)
	{
		cout << "Остатка нет!" << endl;
	}
	else
	{
		cout << "fmod: " << resultMod << endl;
	}
}
void Practical::doubleFigures()
{
	const Range kDefaultRange{ 0, 99 };
	int value_one_ = GetIntegerValueInRangeFromUser(kDefaultRange);
	int value_two_ = GetIntegerValueInRangeFromUser(kDefaultRange);
	value_one_ = value_one_ / 10;
	value_two_ = value_two_ % 10;
	value_one_ = value_one_ + value_two_;
	cout << "Сумма цифр: " << value_one_ << endl;
}
void Practical::ClearCin()
{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

bool Practical::IsValueInRange(int value, const Range &range) {
	return value >= range.from && value <= range.to;
}

bool IsValidRange(const Range &range) { return range.from < range.to; }

void Practical::AskUserValueInRange(const Range &range)
{
	assert(IsValidRange(range));
	cout << "Введите число от " << range.from << " до " << range.to << endl;
}
int Practical::GetIntegerValueInRangeFromUser(const Range &range)
{
	int value = range.from;
	cout << "Введите число от 0 до 99 " << endl;
	while (!(cin >> value) || !IsValueInRange(value, range)) 
	{
		AskUserValueInRange(range);
		ClearCin();
	}
	return value;
}
Practical::Practical()
{
}


Practical::~Practical()
{
}

