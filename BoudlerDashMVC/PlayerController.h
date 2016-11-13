#pragma once

#include <memory>

#include "PlayerModel.h"
#include "PlayerView.h"
#include "GameObjectController.hpp"

class PlayerController
{
private:
	std::shared_ptr<PlayerModel> model;
	std::shared_ptr<PlayerView> view;
public:
	PlayerController();
	~PlayerController();

	void moveRigth();
	void moveLeft();
	void moveDown();
	void moveUp();
	void listenKey(bool & active, std::vector<std::shared_ptr<GameObjectController>>& objects);
};

