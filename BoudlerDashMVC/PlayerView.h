#pragma once

#include "Listener.h"

#include <memory>

#include "PlayerModel.h"

class PlayerView :
	public Listener
{
private:
	std::shared_ptr<PlayerModel> model;
public:
	PlayerView(std::shared_ptr<PlayerModel>);
	~PlayerView();

	void update();
};

