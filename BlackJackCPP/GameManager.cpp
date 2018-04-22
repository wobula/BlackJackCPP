#include "stdafx.h"
#include "GameManager.h"
#include "Output.h"
#include "Player.h"

						GameManager::GameManager()
{
	this->Out = new Output();
	this->In = new Input();
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
		playerCount = in->Int(out, "Please enter the number of players: ");
		if (playerCount > 0 && playerCount < 5)
			break;
	}
	out->put("Player count is " + std::to_string(playerCount));
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
	out->put("Player count: " + std::to_string(playerCount));
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
		out->put("--Please select an option--");
		out->put("1. Hit");
		out->put("2. Stand");
		out->put("3. Quit Game");
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
		playerChoice = GatherPlayerTurnChoice(in, out);
		out->put("Player choice: " + std::to_string(playerChoice));
		if (playerChoice == 1)
			player->MyHand->AddCard(player->DrawCard(player->Cards));
		else if (playerChoice == 2)
			break;
		else if (playerChoice == 3)
			return (false);
		player->MyHand->DisplayHand(out);
	}
	return (true);
}

void					GameManager::Play()
{
	std::cout << "Play function" << std::endl;
	this->currentMoveIndex = 0;
	while (42)
	{
		if (HandlePlayerTurn(this->In, this->Out, this->players->at(this->currentMoveIndex)) == false)
			break;
		//check win conditions
		//increment to next player
		std::cout << "Game loop";
	}
	this->end(NULL);
}

void				GameManager::end(IPlayer *winner)
{
	std::cout << "End game" << std::endl;
}