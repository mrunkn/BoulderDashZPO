#include "stdafx.h"

#include <iostream>
#include <Windows.h>
#include <conio.h>

#include "Game.h"
#include "ConsoleHelpers.h"

#include "DiamondModel.hpp"
#include "DiamondController.hpp"
#include "DiamondView.hpp"

void generateInitialMap(char(&map)[MAP_Y][MAP_X]) {
	for (int y = 0; y < MAP_Y; ++y)
	{
		for (int x = 0; x < MAP_X; ++x)
		{
			map[y][x] = '#';
		}
	}

	map[1][1] = '@';
	map[3][2] = 'D';
	map[5][4] = 'D';
	map[9][4] = 'D';
}

Game::Game()
{
}

Game::~Game()
{
}

void Game::generateMap(char(&map)[MAP_Y][MAP_X])
{
	setCursorP(0, 3);
	for (int y = 0; y < MAP_Y; ++y)
	{
		for (int x = 0; x < MAP_X; ++x)
		{
			if (map[y][x] == 'D') {
				auto model = std::make_shared<DiamondModel>(y, x);
				objects.push_back(std::make_shared<DiamondController>(model, std::make_shared<DiamondView>(model)));
			}
			std::cout << map[y][x];
		}
		std::cout << "\n";
	}
}

void Game::startLoop() {
	bool active = true;

	while (active)
	{
		player->listenKey(active, objects);
	}

	Sleep(1);
}

void Game::init()
{
	player = std::make_unique<PlayerController>();
	char map[MAP_Y][MAP_X];
	
	hideCursor();
	generateInitialMap(map);
	generateMap(map);
	startLoop();
}
