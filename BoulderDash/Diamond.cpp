#include "stdafx.h"
#include "ConsoleHelpers.h"
#include <iostream>
#include "Diamond.h"


Diamond::Diamond(int _x, int _y)
{
	x = _x;
	y = _y;
}


Diamond::~Diamond()
{
}

void Diamond::render()
{
	setCursor(x, y);
	std::cout << "D";
}

void Diamond::action(std::shared_ptr<State> state)
{
	state->addDiamond();
}
