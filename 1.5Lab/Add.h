#pragma once
#include "IBaseCommand.h"
class Add : public IBaseCommand
{
public:

public:
	int numFirst, numSecond;
	double modCommand(int num1, int num2)
	{
		double answer = num1 + num2;
		return answer;
	}

	double Execute(int num1, int num2)
	{
		return modCommand(num1, num2);
	}
};

