#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include "IPlayer.h"
#include "IHand.h"
#include "IDeck.h"
#include "Move.h"
#include <string>

class Player : public IPlayer
{
	public:
		std::string *Name;

					Player();
					Player(std::string name);
					~Player();
		ICard*		DrawCard(IDeck *cards);
		IMove*		GetMove(IInput *in, IOutput *out);

	private:
		   IDeck		*cards;
		   IHand		*hand;
};

#endif