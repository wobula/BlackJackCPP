#pragma once

#ifndef IPLAYER_H
#define IPLAYER_H

#include "ICard.h"
#include "IDeck.h"
#include "IHand.h"
#include "IMove.h"
#include "Input.h"
#include "IOutput.h"

class IPlayer
{
	public:
		std::string* name;

		virtual					~IPlayer() = 0;
		virtual ICard*			DrawCard(IDeck *cards) = 0;
		virtual IMove*			GetMove(IInput *in, IOutput *out) = 0;

	private:
		IDeck*		 cards;
		IHand*		 hand;
};

#endif