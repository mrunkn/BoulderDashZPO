#pragma once
#include "GameObjectView.hpp"
#include "DiamondModel.hpp"

class DiamondView :
	public GameObjectView
{
public:
	DiamondView(std::shared_ptr<DiamondModel> model);
	~DiamondView();

	virtual void update();
};

