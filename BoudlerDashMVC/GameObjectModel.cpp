#include "stdafx.h"
#include "GameObjectModel.hpp"


GameObjectModel::GameObjectModel(int _x, int _y)
{
	x = _x;
	y = _y;
}


GameObjectModel::~GameObjectModel()
{
}

int GameObjectModel::getX()
{
	return x;
}

int GameObjectModel::getY()
{
	return y;
}
