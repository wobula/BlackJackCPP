#include "stdafx.h"
#include "Output.h"

Output::Output()
{
}

Output::~Output()
{
}

void Output::putline()
{
	std::cout << std::endl;
}

void Output::putline(std::string print)
{
	std::cout << print << std::endl;
}

void Output::putline(std::string *print)
{
	std::cout << *print << std::endl;
}

void Output::putline(int num)
{
	std::cout << num << std::endl;
}

void Output::put(std::string print)
{
	std::cout << print;
}

void Output::put(std::string *print)
{
	std::cout << *print;
}

void Output::put(int num)
{
	std::cout << num;
}