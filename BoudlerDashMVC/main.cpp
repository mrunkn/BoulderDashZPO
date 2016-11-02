// BoudlerDashMVC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <memory>

#include "Game.h"


int main()
{
	std::unique_ptr<Game> game = std::make_unique<Game>();
	game->init();
    return 0;
}

