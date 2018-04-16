#pragma once
#include "IDeck.h"
#include <iostream>

class Deck : public IDeck
	{
	public:
		Deck();
		~Deck();

		std::vector<Card> MyDeck;
};

