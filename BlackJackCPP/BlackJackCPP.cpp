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
	GameManager test; //Playing around with stack vs heap notation

	bj = new GameManager();
	test.Out->put("Hi"); // Stack and heap notation combined
	bj = dynamic_cast<GameManager*>(bj); //zomg dynamic casting
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

