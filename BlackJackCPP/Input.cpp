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

	out->put(prompt);
	std::getline(std::cin, tmp);
	return (tmp);
}

int			Input::Int(void)
{
	int value;

	std::cin >> value;
	return (value);
}

int			Input::Int(IOutput *out, std::string prompt)
{
	int value;

	out->put(prompt);
	std::cin >> value;
	return (value);
}