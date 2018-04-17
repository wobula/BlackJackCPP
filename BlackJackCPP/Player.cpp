#include "stdafx.h"
#include "Player.h"

Player::Player(std::string name)
{
	this->name = new std::string(name);
	this->cards = new Deck();
	this->hand = new Hand();
}

Player::Player() : Player("player name")
{
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
	else if (action[0] == "h")
		move->action = Hit;
	else
		move->action = Last;
	return (move);
}