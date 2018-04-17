#pragma once

#ifndef IDECK_H
#define IDECK_H

#include <vector>
#include "ICard.h"

class IDeck
{
	public:
		virtual ~IDeck() = 0;
		//virtual ICard* DrawCard(void) = 0;
		std::vector<ICard*> MyDeck;
};

#endif