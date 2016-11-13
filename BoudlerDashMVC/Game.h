#pragma once

#include <vector>
#include <memory>

#include "PlayerController.h"
#include "GameObjectController.hpp"

#define MAP_X 100
#define MAP_Y 25

class Game
{
private:
	std::shared_ptr<PlayerController> player;
	std::vector <std::shared_ptr<GameObjectController>> objects;
public:
	Game();
	~Game();

	void startLoop();
	void generateMap(char(&map)[MAP_Y][MAP_X]);
	void init();
};

