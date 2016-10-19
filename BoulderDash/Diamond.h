#pragma once
#include "GameObject.h"

class Diamond :
	public GameObject
{
public:
	Diamond(int _x, int _y);
	~Diamond();

	void render();
	void action(std::shared_ptr<State> state);
};

