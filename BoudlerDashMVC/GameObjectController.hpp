#pragma once

#include <memory>
#include "GameObjectModel.hpp"
#include "GameObjectView.hpp"

class GameObjectController
{
protected:
	std::shared_ptr<GameObjectModel> model;
	std::shared_ptr<GameObjectView> view;
public:
	GameObjectController(std::shared_ptr<GameObjectModel> model, std::shared_ptr<GameObjectView> view);
	~GameObjectController();
	
	bool checkCollision(int x, int y);
};

