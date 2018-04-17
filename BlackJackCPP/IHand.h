#pragma once

#ifndef IHAND_H
#define IHAND_H

#include "ICard.h"
#include <vector>

class IHand
{
	public:
		virtual ~IHand() = 0;
		virtual void AddCard(ICard *card) = 0;
	private:
		std::vector<ICard*>	cards;
};

#endif