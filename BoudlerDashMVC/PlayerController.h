#pragma once

#include <memory>

#include "PlayerModel.h"
#include "PlayerView.h"

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
};

