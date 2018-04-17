#pragma once

#ifndef  GAMEMANAGER_H
#define	 GAMEMANAGER_H

#include "Output.h"
#include "IGameManager.h"

class GameManager : public IGameManager
{
	public:
		IOutput *Out;
		GameManager();
		~GameManager();
};

#endif