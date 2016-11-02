#pragma once

#include <vector>
#include <memory>

#include "PlayerController.h"

#define MAP_X 100
#define MAP_Y 25

class Game
{
private:
	std::shared_ptr<PlayerController> player;
public:
	Game();
	~Game();

	void startLoop();
	void generateMap(char(&map)[MAP_Y][MAP_X]);
	void init();
};

