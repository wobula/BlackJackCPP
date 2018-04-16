#include "stdafx.h"
#include "Input.h"
#include <iostream>
#include <string>

Input::Input()
{
}

Input::~Input()
{
}

std::string Input::in(void)
{
	std::string tmp;

	std::getline(std::cin, tmp);
	return (tmp);
}

std::string Input::in(std::string prompt)
{
	std::string tmp;

	std::cout << prompt;
	std::getline(std::cin, tmp);
	return (tmp);
}