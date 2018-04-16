#include "stdafx.h"
#include "Output.h"


Output::Output()
{
}


Output::~Output()
{
	std::cout << "Destructing your output provider" << std::endl;
}

void Output::out(std::string print)
{
	std::cout << print << std::endl;
}

void Output::out(int num)
{
	std::cout << num << std::endl;
}