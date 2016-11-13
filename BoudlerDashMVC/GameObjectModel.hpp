#pragma once
#include "Observable.h"
class GameObjectModel :
	public Observable
{
protected:
	int x;
	int y;
public:
	GameObjectModel(int x, int y);
	~GameObjectModel();

	int getX();
	int getY();
};

