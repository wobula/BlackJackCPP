// BlackJackCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "IOutput.h"
#include "Output.h"
#include "IInput.h"
#include "Input.h"
#include <iostream>
#include <string>

int main()
{
	std::string name;
	IOutput* print; //Virtual base class
	IInput* get; //Virtual base class

	print = new Output(); //Inhereting concrete class
	get = new Input();	//Inhereting concrete class

	print->out("Hello BlackJack world :D");
	name = get->in();
	print->out("You just retrieved a line: " + name);
	delete print; //testing destructor of derived class
	delete get;	//testing destructor of derived class

	std::getline(std::cin, name); //in place of a breakpoint
    return (0);

	//Hurray for the return of pointers and programmer directed memory management :D
}

