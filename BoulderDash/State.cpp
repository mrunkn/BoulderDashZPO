#include "stdafx.h"
#include "State.h"
#include <iostream>
#include "ConsoleHelpers.h"


State::State()
{
	diamonds = 0;
}


State::~State()
{
}

int State::getDiamonds()
{
	return diamonds;
}

void State::addDiamond() {
	++diamonds;
	setCursor(0, 0);
	std::cout << diamonds;
}
