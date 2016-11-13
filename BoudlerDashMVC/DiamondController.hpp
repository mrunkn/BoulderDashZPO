#pragma once
#include "GameObjectController.hpp"

#include "DiamondModel.hpp"
#include "DiamondView.hpp"
class DiamondController :
	public GameObjectController
{
public:
	DiamondController(std::shared_ptr<DiamondModel> model, std::shared_ptr<DiamondView> view);
	~DiamondController();
};

