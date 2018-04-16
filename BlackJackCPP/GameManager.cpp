#include "stdafx.h"
#include "GameManager.h"
#include "Output.h"

GameManager::GameManager()
{
	this->Out = new Output();
	this->Out->put("Hi mom");
}

GameManager::~GameManager()
{
	delete this->Out;
}
