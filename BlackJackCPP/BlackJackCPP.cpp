// BlackJackCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Card.h"
#include "GameManager.h"
#include <iostream>
#include <string>

int main()
{
	std::string name;
	IGameManager *bj;

	bj = new GameManager();
	GameManager *blah;

	blah = dynamic_cast<GameManager*>(bj);
	
	blah->Out->put("What is a supdog");

	std::getline(std::cin, name); //in place of a breakpoint
    return (0);

	//Hurray for the return of pointers and programmer directed memory management :D
}

