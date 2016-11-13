#include "stdafx.h"

#include <iostream>

#include "DiamondView.hpp"


DiamondView::DiamondView(std::shared_ptr<DiamondModel> model):
	GameObjectView(model)
{
}


DiamondView::~DiamondView()
{
}

void DiamondView::update()
{
	std::cout << "Kupa!" << std::endl;
}
