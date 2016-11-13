#include "stdafx.h"
#include "GameObjectController.hpp"


GameObjectController::GameObjectController(std::shared_ptr<GameObjectModel> _model, std::shared_ptr<GameObjectView> _view) :
	model(_model),
	view(_view)
{
}


GameObjectController::~GameObjectController()
{
}

bool GameObjectController::checkCollision(int x, int y)
{
	if (model->getX() == x && model->getY() == y) {
		return true;
	}

	return false;
}
