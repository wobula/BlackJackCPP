#include "stdafx.h"
#include "Deck.h"
#include <string>


Deck::Deck()
{
	std::cout << "Making your deck of cards!" << std::endl;
	this->MyDeck = MakeDeck();
}

std::vector<Card*>* Deck::MakeDeck(void)
{
	const std::string enumtext[] = { "Heart", "Club", "Spade", "Diamond" };
	std::vector<Card*>* tmpDeck = new std::vector<Card*>();
	Card *ptr;
	int cardValue = 1;
	for (int cardCount = 0; cardCount < 36;)
	{
		cardValue++;
		for (int suit = 3; suit > -1; suit--)
		{
			tmpDeck->push_back(new Card(cardValue, enumtext[suit], false));
			ptr = tmpDeck->at(cardCount);
			std::cout << "Card suit: " + *ptr->suit + " | Card name: " << *ptr->name << " | Card value: " << ptr->value << std::endl;
			cardCount++;
		}
	}
	return (tmpDeck);
}

Deck::~Deck()
{
	delete_cards(this->MyDeck);
	delete MyDeck;
}

void	Deck::delete_cards(std::vector<Card*> *deck)
{
	if (!deck)
		return;
	std::cout << "Deleting your deck of cards!" << std::endl;
	std::cout << "Number of cards: " << deck->size() << std::endl;
	Card *ptr;
	for (int x = 0; x < deck->size(); x++)
	{
		ptr = deck->at(x);
		std::cout << "Card suit: " + *ptr->suit + " | Card name: " << *ptr->name << " | Card value: " << ptr->value << std::endl;
		delete ptr;
	}
}