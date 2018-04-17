#include "stdafx.h"
#include "Output.h"

Output::Output()
{
}

Output::~Output()
{
}

void Output::put(std::string print)
{
	std::cout << print << std::endl;
}

void Output::put(std::string *print)
{
	std::cout << *print << std::endl;
}

void Output::put(int num)
{
	std::cout << num << std::endl;
}