#pragma once
#include "GameObject.h"
#include <vector>
#include <memory>

typedef std::vector<std::shared_ptr<GameObject>> GameObjects;

class Player
{
private:
	int lastX;
	int lastY;
	int x;
	int y;
	void cachePosition();
	bool updated;
public:
	Player(int, int);
	~Player();

	int getX();
	int getY();
	void moveRight();
	void moveDown();
	void moveUp();
	void moveLeft();
	void render();
};

