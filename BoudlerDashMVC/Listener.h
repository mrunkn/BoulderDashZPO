#pragma once
class Listener
{
public:
	Listener() {}
	~Listener() {}

	virtual void update() = 0;
};

