#include "stdafx.h"

#include <memory>

#include "PlayerController.h"
#include "PlayerModel.h"


PlayerController::PlayerController()
{
	model = std::make_shared<PlayerModel>(1, 4);
	view = std::make_shared<PlayerView>(model);

	model->addListener(view);
}


PlayerController::~PlayerController()
{
}

void PlayerController::moveRigth()
{
	int x = model->getX();
	int y = model->getY();

	model->changePosition(++x, y);
}

void PlayerController::moveLeft()
{
	int x = model->getX();
	int y = model->getY();

	if (x) {
		model->changePosition(--x, y);
	}
}

void PlayerController::moveDown()
{
	int x = model->getX();
	int y = model->getY();

	if (y) {
		model->changePosition(x, ++y);
	}
}

void PlayerController::moveUp()
{
	int x = model->getX();
	int y = model->getY();

	if (y) {
		model->changePosition(x, --y);
	}
}