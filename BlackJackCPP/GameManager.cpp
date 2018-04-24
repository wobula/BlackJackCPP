#include "stdafx.h"
#include "GameManager.h"
#include "Render.h"

						GameManager::GameManager()
{
	this->Out = new Output();
	this->In = new Input();
	this->Draw = new Render(this->Out, this->In);
	this->init(this->In, this->Out);
}

						GameManager::~GameManager()
{
	delete this->Out;
	delete this->In;
	deletePlayers(this->players);
}

void					GameManager::deletePlayers(std::vector<IPlayer*> *players)
{
	players->clear();
	delete players;
}

void					GameManager::init(IInput *in, IOutput *out)
{
	this->playerCount = getPlayerCount(in, out);
	this->players = makePlayers(this->In, this->Out, playerCount);
	this->currentMoveIndex = 0;
}

int		GameManager::getPlayerCount(IInput *in, IOutput *out)
{
	int playerCount;

	while (42)
	{
		this->Draw->InitPlayerNumber();
		playerCount = in->Int();
		if (playerCount > 0 && playerCount < 5)
			break;
	}
	out->putline("Player count is " + std::to_string(playerCount));
	return (playerCount);
}

std::vector<IPlayer*>*	GameManager::makePlayers(IInput *in, IOutput *out, int playerCount)
{
	std::string name;
	std::vector<IPlayer*> *players = new std::vector<IPlayer*>();
	IPlayer *tmp;
	int x = -1;

	while (++x < playerCount)
	{
		name = in->String(out, "Please enter player name: ");
		tmp = new Player(new std::string(name), new Deck((new std::vector<ICard*>())), new Hand());
		players->push_back(tmp);
	}
	out->putline("Player count: " + std::to_string(playerCount));
	x = -1;
	while (++x < playerCount)
		out->put(players->at(x)->Name);
	return (players);
}

int						GameManager::GatherPlayerTurnChoice(IInput *in, IOutput *out)
{
	int choice;

	while (true)
	{
		out->putline("--Please select an option--");
		out->putline("1. Hit");
		out->putline("2. Stand");
		out->putline("3. Quit Game");
		choice = in->Int();
		if (choice > 0 && choice < 4)
			break;
	}
	return (choice);
}

bool					GameManager::HandlePlayerTurn(IInput *in, IOutput *out, IPlayer *player)
{
	int playerChoice = -1;
	while (true)
	{
		out->putline("Current hand value: " + player->MyHand->GetHandValue());
		playerChoice = GatherPlayerTurnChoice(in, out);
		out->putline("Player choice: " + std::to_string(playerChoice));
		if (playerChoice == 1)
			player->MyHand->AddCard(player->DrawCard(player->Cards));
		else if (playerChoice == 2)
			break;
		else if (playerChoice == 3)
			return (false);
		if (player->MyHand->GetHandValue() > 21)
			break;
		player->MyHand->DisplayHand(out);
	}
	return (true);
}

void					GameManager::Play()
{
	this->currentMoveIndex = 0;
	while (this->currentMoveIndex < this->playerCount)
	{
		if (HandlePlayerTurn(this->In, this->Out, this->players->at(this->currentMoveIndex)) == false)
			break;
		this->currentMoveIndex++;
		//increment to next player
	}
	this->end(NULL);
}

void				GameManager::end(IPlayer *winner)
{
	std::cout << "End game" << std::endl;
}