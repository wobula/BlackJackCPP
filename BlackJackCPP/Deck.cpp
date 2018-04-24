#include "stdafx.h"
#include "Deck.h"
#include <string>

Deck::Deck(std::vector<ICard*> *cards) : IDeck(cards)
{
	std::cout << "Making your deck of cards!" << std::endl;
	this->MyDeck = cards;
	FillDeck(this->MyDeck);
}

void Deck::makeNumberCards(std::vector<ICard*>* tmpDeck)
{
	const std::string enumtext[] = { "Heart", "Club", "Spade", "Diamond" };
	Card *ptr;
	int cardValue = 1;
	for (int cardCount = 0; cardCount < 36;)
	{
		cardValue++;
		for (int suit = 3; suit > -1; suit--)
		{
			tmpDeck->push_back(new Card(cardValue, enumtext[suit], false));
			ptr = (Card*)tmpDeck->at(cardCount);
			std::cout << "Card suit: " + *ptr->suit + " | Card name: " << *ptr->name << " | Card value: " << ptr->value << std::endl;
			cardCount++;
		}
	}
}

void Deck::makeFaceCards(std::vector<ICard*>* tmpDeck)
{
	std::cout << "--> Making face cards" << std::endl;
	const std::string enumtext[] = { "Heart", "Club", "Spade", "Diamond" };
	const std::string enumtextFace[] = { "Ace", "King", "Queen", "Jack" };
	Card *ptr;
	int cardValue = -1;
	for (int cardCount = 0; cardCount < 16;)
	{
		cardValue++;
		for (int suit = 3; suit > -1; suit--)
		{
			ptr = new Card(10, enumtextFace[cardValue], enumtext[suit], false);
			tmpDeck->push_back(ptr);
			std::cout << "Card suit: " + *ptr->suit + " | Card name: " << *ptr->name << " | Card value: " << ptr->value << std::endl;
			cardCount++;
		}
	}
}

void Deck::FillDeck(std::vector<ICard*>* tmpDeck)
{
	makeNumberCards(tmpDeck);
	makeFaceCards(tmpDeck);
}

Deck::~Deck()
{
	delete_cards(this->MyDeck);
	delete MyDeck;
}

void	Deck::delete_cards(std::vector<ICard*> *deck)
{
	if (!deck)
		return;
	Card *ptr;
	for (int x = 0; x < (int)deck->size(); x++)
	{
		ptr = (Card*)deck->at(x);
		delete (ptr->name);
		delete (ptr->suit);
		delete (ptr);
	}
}