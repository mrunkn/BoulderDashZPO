#include "stdafx.h"

#include <memory>
#include <conio.h>

#include "PlayerController.h"
#include "PlayerModel.h"

const int KEY_UP = 72;
const int KEY_DOWN = 80;
const int KEY_LEFT = 75;
const int KEY_RIGHT = 77;
const int ESC = 27;

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

void PlayerController::listenKey(bool& active, std::vector<std::shared_ptr<GameObjectController>>& objects) {
	if (_kbhit()) {
		switch (_getch())
		{
		case KEY_UP:
			moveUp();
			break;
		case KEY_DOWN:
			moveDown();
			break;
		case KEY_LEFT:
			moveLeft();
			break;
		case KEY_RIGHT:
			moveRigth();
			break;
		case ESC:
			active = false;
			break;
		default:
			break;
		}
	}
}