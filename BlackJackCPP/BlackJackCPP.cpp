// BlackJackCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


int main()
{
	std::string name;

	std::cout << "Hello BlackJack world :D" << std::endl;
	std::getline(std::cin, name);
	std::cout << "You just retrieved a line: " + name << std::endl;
	std::getline(std::cin, name); //in place of a breakpoint
    return (0);
}

