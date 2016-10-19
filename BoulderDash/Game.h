#pragma once

#include "Player.h"
#include <memory>
#include <vector>

class Game
{
private:
	Player *player;

	std::vector<std::shared_ptr<GameObject>> objects;
	std::shared_ptr<State> state;

	void startLoop();
public:
	Game();
	~Game();

	void start();
};
