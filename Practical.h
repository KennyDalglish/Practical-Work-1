#pragma once
struct Range 
{
	int from;
	int to;
};
class Practical
{
public:
	void random(int);
	void digital(int);
	void errorProgrammCode();
	void numbersGame();
	void doubleFigures();
	Practical();
	~Practical();
private:
	bool IsValueInRange(int value, const Range &range);
	void AskUserValueInRange(const Range &range);
	int GetIntegerValueInRangeFromUser(const Range &range);
	void ClearCin();
	bool IsValidRange(const Range &range);
	ldiv_t div_result;
	double result_game;
	double resultMod;
	int value_one = 0;
	int value_two = 0;
	int output_digital = 0;
};

