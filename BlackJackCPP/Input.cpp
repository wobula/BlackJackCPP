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

std::string Input::String(void)
{
	std::string tmp;

	std::getline(std::cin, tmp);
	return (tmp);
}

std::string Input::String(IOutput *out, std::string prompt)
{
	std::string tmp;

	out->putline(prompt);
	std::getline(std::cin, tmp);
	return (tmp);
}

int			Input::Int(void)
{
	int value = -1;
	std::string tmp;

	std::getline(std::cin, tmp);
	value = atoi(tmp.c_str());
	return (value);
}

int			Input::Int(IOutput *out, std::string prompt)
{
	std::string tmp;
	int			value;

	while (42)
	{
		out->putline(prompt);
		std::getline(std::cin, tmp);
		if (tmp.length() != 0 && tmp[0] > '0' && tmp[0] < '9')
			break;
	}
	value = tmp[0] - 48;
	std::cin.clear();
	std::cin.sync();
	return (value);
}