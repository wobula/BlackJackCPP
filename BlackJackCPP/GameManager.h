#pragma once
#include "Output.h"
#include "IGameManager.h"

class GameManager : public IGameManager
{
	public:
		IOutput *Out;
		GameManager();
		~GameManager();
};

