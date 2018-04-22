#pragma once
#ifndef HAND_H
#define HAND_H

#include "IHand.h"
#include <vector>

class Hand : public IHand
{
	public:
		Hand();
		~Hand();
		void	AddCard(ICard *card);
		int		GetHandValue(std::vector<ICard*> *card);
		void	DisplayHand(IOutput *out);
	private:
		std::vector<ICard*> *cards;
};

#endif