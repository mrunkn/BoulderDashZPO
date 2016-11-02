#include "stdafx.h"
#include "PlayerModel.h"


PlayerModel::PlayerModel(int _x, int _y)
{
	x = _x;
	y = _y;
	lastX = _x;
	lastY = _y;
}


PlayerModel::~PlayerModel()
{
}

void PlayerModel::setX(int _x) {
	lastX = x;
	x = _x;
	notifyAll();
}

void PlayerModel::setY(int _y) {
	lastY = y;
	y = _y;
	notifyAll();
}

void PlayerModel::changePosition(int _x, int _y)
{
	lastY = y;
	lastX = x;
	x = _x;
	y = _y;
	notifyAll();
}
