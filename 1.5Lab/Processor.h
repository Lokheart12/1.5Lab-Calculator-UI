#pragma once
#include "cMain.h"
class Processor
{
private:
	static Processor* calc;
	int baseNumber;
	Processor()//empty constructor because we don't want anyone to use this
	{

	}
public:
	static Processor* getInstance();
	void setBaseNumber(int inputNum);


	Processor(Processor& otherProcessor) = delete; //copy constructor deletes because we don't want anyone to use this
	void operator =(const Processor& otherProcessor) = delete;//assignment constructor deletes because we don't want anyone to use this

	std::string getHexadecimal();
	std::string getBianary();
	std::string getDecimal();
};

