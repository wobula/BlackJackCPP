#include "stdafx.h"
#include "Player.h"

Player::Player()
{
}

Player::Player(std::string name)
{
	this->name = new std::string(name);
}

Player::~Player()
{
}

ICard*	Player::DrawCard(IDeck *cards)
{
	ICard *tmp;

	tmp = cards->MyDeck.back();
	cards->MyDeck.pop_back();
	return (tmp);
}

IMove*	Player::GetMove(IInput *in, IOutput *out)
{
	IMove *move;
	std::string *action = NULL;

	action = &(in->String(out, "Please select your move: "));
	if (!action)
		return (NULL);
	if (action[0] != "s" && action[0] != "h")
		return (NULL);
	move = new Move();
	if (action[0] == "s")
		move->action = Stand;
	else
		move->action = Hit;
	return (move);
}