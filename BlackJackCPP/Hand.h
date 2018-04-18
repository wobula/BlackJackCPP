#pragma once
#include "IHand.h"
class Hand : public IHand
{
	public:
		Hand();
		~Hand();
		void	AddCard(ICard *card);
	private:
		std::vector<ICard*> *cards;
};

/*
public:
virtual			~IHand() = 0;
virtual void	AddCard(ICard *card) = 0;
private:
std::vector<ICard*>	cards;
*/
