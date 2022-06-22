#pragma once
#include "IBaseCommand.h"
class Mod : public IBaseCommand
{
public:
	int numFirst, numSecond;
	double modCommand(int num1, int num2)
	{
		double answer = num1 % num2;
		return answer;
	}

	double Execute(int num1, int num2)
	{
		return modCommand(num1, num2);
	}
};

