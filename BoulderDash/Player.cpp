#include "stdafx.h"
#include "Player.h"
#include "ConsoleHelpers.h"
#include <iostream>
#include <memory>
#include <vector>

Player::Player(int _x, int _y)
{
	x = _x;
	y = _y;
	lastX = _x;
	lastY = _y;
	updated = true;
}

int Player::getX() {
	return x;
}

int Player::getY() {
	return y;
}

void Player::render() {
	if (updated) {
		setCursor(lastX, lastY);
		std::cout << " ";
		setCursor(x, y);
		std::cout << "@";
		updated = false;
	}
}

void Player::moveRight() {
	cachePosition();
	++x;
}

void Player::moveDown() {
	cachePosition();
	++y;
}

void Player::moveUp()
{
	cachePosition();
	--y;
}

void Player::moveLeft()
{
	cachePosition();
	--x;
}

void Player::cachePosition() {
	lastX = x;
	lastY = y;
	updated = true;
}

Player::~Player()
{
}
