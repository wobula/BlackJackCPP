#include "stdafx.h"
#include "IPlayer.h"

IPlayer::IPlayer(std::string *name, IDeck *deck, IHand *hand) :
	Name(name), Cards(deck), MyHand(hand)
{

}

IPlayer::~IPlayer()
{
}
