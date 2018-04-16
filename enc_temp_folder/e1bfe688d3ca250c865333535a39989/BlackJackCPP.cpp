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
	IGameManager *bj;
	GameManager *blah;
	Deck		*cards;
	GameManager test;

	bj = new GameManager();
	test.Out->put("Hi");
	bj = dynamic_cast<GameManager*>(bj);
	blah = dynamic_cast<GameManager*>(bj);
	blah->Out->put("What is a supdog");
	cards = new Deck();
	
	delete bj;
	bj = NULL;
	std::getline(std::cin, name); //in place of a breakpoint
	delete cards;
    return (0);
	//Hurray for the return of pointers and programmer directed memory management :D
}

