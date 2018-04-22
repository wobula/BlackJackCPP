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

int		Hand::GetHandValue()
{
	int x = -1;
	int value = 0;
	while (++x < (int)this->cards->size())
	{
		value += this->cards->at(x)->GetValue();
	}
	return (value);
}

void	Hand::AddCard(ICard *card)
{
	this->cards->push_back(card);
}

void	Hand::DisplayHand(IOutput *out)
{
	int x = -1;
	out->putline("\n-->Display Hand<--");
	while (++x < (int)this->cards->size())
	{
		this->cards->at(x)->PrintCard(out);
		out->put(" \n");
	}
	out->putline();
}