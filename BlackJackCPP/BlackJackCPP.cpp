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
	GameManager *blah;

	bj = new GameManager();
	bj = dynamic_cast<GameManager*>(bj);

	blah = dynamic_cast<GameManager*>(bj);
	blah->Out->put("What is a supdog");

	std::getline(std::cin, name); //in place of a breakpoint
    return (0);

	//Hurray for the return of pointers and programmer directed memory management :D
}

