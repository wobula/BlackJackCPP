#pragma once
#include "ICard.h"
#include "IOutput.h"

class Card : public ICard
{
	public:
				Card();
				Card(int value, std::string suit, bool faceDown);
				Card(int value, std::string face, std::string suit, bool faceDown);
				~Card();
		void	PrintCard(IOutput *out);
		void	FlipCard();

	//private:
		int				value;
		std::string		*name;
		std::string		*suit;
		bool			faceDown;

		std::string*	card_int_to_string(int value);
};

enum Id
{
	Ace = 1,
	King = 10,
	Queen = 10,
	Jack = 10,
	Ten = 10,
	Nine = 9,
	Eight = 8,
	Seven = 7,
	Six = 6,
	Five = 5,
	Four = 4,
	Three = 3,
	Two = 2,
	Last = 11
};

enum Type
{
	Heart,
	Club,
	Diamond,
	Spade
};
