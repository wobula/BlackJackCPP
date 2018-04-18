#include "stdafx.h"
#include "Hand.h"


Hand::Hand()
{
	this->cards = new std::vector<ICard*>();
}

Hand::~Hand()
{
	this->cards->clear();
	delete this->cards;
}

void	Hand::AddCard(ICard *card)
{
	this->cards->push_back(card);
}
