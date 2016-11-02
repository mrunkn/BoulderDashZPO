#include "stdafx.h"
#include "PlayerView.h"

#include <iostream>

#include "ConsoleHelpers.cpp"

PlayerView::PlayerView(std::shared_ptr<PlayerModel> _model) : model(_model)
{
}


PlayerView::~PlayerView()
{
}



void PlayerView::update()
{
	setCursorP(model->getLastX(), model->getLastY());
	std::cout << " ";

	setCursorP(model->getX(), model->getY());
	std::cout << "@";
}
