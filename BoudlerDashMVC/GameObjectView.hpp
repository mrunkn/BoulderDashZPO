#pragma once
#include "Listener.h"

#include <memory>

#include "GameObjectModel.hpp"

class GameObjectView :
	public Listener
{
protected:
	std::shared_ptr<GameObjectModel> model;
public:
	GameObjectView(std::shared_ptr<GameObjectModel> model);
	~GameObjectView();
	
	virtual void update() = 0;
};

