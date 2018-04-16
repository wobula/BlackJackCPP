#pragma once
#include "IDeck.h"
#include <iostream>

class Deck : public IDeck
{
	public:
		Deck();
		~Deck();

		std::vector<Card*> *MyDeck;
		std::string			card_int_to_string(int value);
	private:
		std::vector<Card*>*	MakeDeck(void);
		void				delete_cards(std::vector<Card*> *deck);
};

