#pragma once
#include "State.h"
#include <memory>

class GameObject
{
protected:
	int x;
	int y;
public:
	GameObject();
	~GameObject();

	virtual void render() = 0;
	virtual void action(std::shared_ptr<State>) = 0;
	
	int getY();
	int getX();
};

