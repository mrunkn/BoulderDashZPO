#pragma once
#include "Observable.h"
class PlayerModel :
	public Observable
{
private:
	int x;
	int y;
	int lastX;
	int lastY;
public:
	PlayerModel(int x, int y);
	~PlayerModel();

	int getX() { return x; };
	int getY() { return y; };
	int getLastX() { return lastX; };
	int getLastY() { return lastY; };
	void setX(int x);
	void setY(int y);
	void changePosition(int x, int y);
};

