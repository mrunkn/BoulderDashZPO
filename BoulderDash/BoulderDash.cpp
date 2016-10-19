// BoulderDash.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Game.h"
//#include <iostream>


int main()
{
	Game *g = new Game();
	g->start();
	delete g;
    return 0;
}
