// BlackJackCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Deck.h"
#include "GameManager.h"
#include <iostream>
#include <string>

int main()
{
	std::string name;
	GameManager *bj;
	Deck		*cards;

	bj = new GameManager();
	bj->Out->put("What is a supdog");
	
	delete bj;
	bj = NULL;
	delete cards;
	std::getline(std::cin, name); //in place of a breakpoint
    return (0);
	//Hurray for the return of pointers and programmer directed memory management :D
}

