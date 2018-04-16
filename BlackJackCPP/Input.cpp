#include "stdafx.h"
#include "Input.h"
#include <iostream>
#include <string>

Input::Input()
{
}

Input::~Input()
{
	std::cout << "Deleting your input provider" << std::endl;
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

/*
std::cout << "Please, enter your full name: ";
std::getline (std::cin,name);
std::cout << "Hello, " << name << "!\n";
*/