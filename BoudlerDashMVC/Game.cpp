#include "stdafx.h"

#include <iostream>
#include <Windows.h>
#include <conio.h>

#include "Game.h"
#include "ConsoleHelpers.h"

#define KEY_UP 72
#define KEY_DOWN 80
#define	KEY_LEFT 75
#define KEY_RIGHT 77
#define ESC 27

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
			std::cout << map[y][x];
		}
		std::cout << "\n";
	}
}

void Game::startLoop() {
	bool active = true;

	while (active)
	{
		if (_kbhit()) {
			switch (_getch())
			{
			case KEY_UP:
				player->moveUp();
				break;
			case KEY_DOWN:
				player->moveDown();
				break;
			case KEY_LEFT:
				player->moveLeft();
				break;
			case KEY_RIGHT:
				player->moveRigth();
				break;
			case ESC:
				active = false;
				break;
			default:
				break;
			}
		}
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
