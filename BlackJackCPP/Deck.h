#pragma once

#ifndef DECK_H
#define DECK_H

#include "IDeck.h"
#include "Card.h"
#include <iostream>

class Deck : public IDeck
{
	public:
		Deck(std::vector<ICard*> *cards);
		~Deck();

		std::vector<ICard*> *MyDeck;
		std::string			*card_int_to_string(int value);
	private:
		void				FillDeck(std::vector<ICard*> *tmpDeck);
		void				makeNumberCards(std::vector<ICard*> *tmpDeck);
		void				makeFaceCards(std::vector<ICard*> *tmpDeck);
		void				delete_cards(std::vector<ICard*> *deck);
};

#endif