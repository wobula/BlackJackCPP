#pragma once
#include <vector>
#include "Card.h"

class IDeck
{
	public:
		virtual ~IDeck() = 0;
		//virtual ICard DrawCard(void) = 0;
		std::vector<ICard> MyDeck;
};

