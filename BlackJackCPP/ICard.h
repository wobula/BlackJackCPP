#pragma once
#include "IOutput.h"

class ICard
{
	public:
		virtual			~ICard() = 0;
		virtual void	PrintCard(IOutput *out) = 0;
		virtual void	FlipCard() = 0;
};