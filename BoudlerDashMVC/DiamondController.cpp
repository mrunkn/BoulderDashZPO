#include "stdafx.h"
#include "DiamondController.hpp"


DiamondController::DiamondController(std::shared_ptr<DiamondModel> model, std::shared_ptr<DiamondView> view) :
	GameObjectController(model, view)
{
}


DiamondController::~DiamondController()
{
}
