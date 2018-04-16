#include "stdafx.h"
#include "GameManager.h"
#include "Output.h"

GameManager::GameManager()
{
	this->Out = new Output();
}

GameManager::~GameManager()
{
	delete this->Out;
}
