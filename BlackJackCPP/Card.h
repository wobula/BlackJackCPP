#pragma once
#include "ICard.h"
#include "IOutput.h"

class Card : public ICard
{
	public:
				Card();
				Card(enum Id value, enum Type suit, bool faceDown);
				~Card();
		void	PrintCard(IOutput *out);
		void	FlipCard();

	private:
		std::string	getSuit(void);

		Id		value;
		Type	suit;
		bool	faceDown;
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
};

enum Type
{
	Heart,
	Club,
	Diamond,
	Spade
};
