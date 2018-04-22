#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include "IPlayer.h"
#include "IHand.h"
#include "IDeck.h"
#include "Deck.h"
#include "Move.h"
#include "Hand.h"
#include "Ihand.h"
#include <string>

class Player : public IPlayer
{
	public:
		std::string *Name;
		IDeck		*Cards;
		IHand		*MyHand;

					Player(std::string *name, IDeck *deck, IHand *card);
					~Player();
		ICard*		DrawCard(IDeck *cards);
		IMove*		GetMove(IInput *in, IOutput *out);
};

#endif