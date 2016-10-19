#include "stdafx.h"
#include "Grass.h"
#include "ConsoleHelpers.h"
#include "Player.h"
#include <iostream>

Grass::Grass(int _x, int _y)
{
	x = _x;
	y = _y;
}


Grass::~Grass()
{

}

void Grass::Render()
{
	SetCursor(x, y);
	std::cout << "#";
}
