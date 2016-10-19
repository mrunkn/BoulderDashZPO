#include "stdafx.h"
#include "Game.h"
#include "ConsoleHelpers.h"
#include "Player.h"
#include "Diamond.h"
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <memory>


#define KEY_UP 72
#define KEY_DOWN 80
#define	KEY_LEFT 75
#define KEY_RIGHT 77
#define ESC 27

#define MAP_X 50
#define MAP_Y 20

const int offsetY = 5;

Game::Game()
{
}

void Game::startLoop()
{
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
				player->moveRight();
				break;
			case ESC:
				active = false;
				break;
			default:
				break;
			}
		}


		for (size_t i = 0; i < objects.size(); ++i) {
			bool testX = player->getX() == objects.at(i)->getX();
			bool testY = player->getY() == objects.at(i)->getY();

			if (testX && testY) {
				objects.at(i)->action(state);
				objects.erase(objects.begin() + i);
			}
		}

		player->render();

		Sleep(1);
	}
}

void Game::start()
{
	char map[MAP_X][MAP_Y];

	for (int x = 0; x < MAP_X; x++)
	{
		for (int y = 0; y < MAP_Y; y++)
		{
			map[x][y] = '#';
		}
	}

	map[1][1] = '@';
	map[3][2] = 'D';
	map[5][4] = 'D';
	map[9][4] = 'D';
	
	for (int x = 0; x < MAP_X; x++) 
	{
		for (int y = 0; y < MAP_Y; y++) 
		{
			if (map[x][y] == '#') {
				setCursor(x, y + offsetY);
				std::cout << "#";
			}

			if (map[x][y] == '@') {
				player = new Player(x, y + offsetY);
			}

			if (map[x][y] == 'D') {
				objects.push_back(std::make_shared<Diamond>(x, y + offsetY));
			}
		}
	}

	for (size_t i = 0; i < objects.size(); ++i) {
		objects.at(i)->render();
	}

	state = std::make_unique<State>();

	hideCursor();
	startLoop();
}

Game::~Game()
{
	
}
