#pragma once

#include "animatedsprite.h"
#include "globals.h"
#include "player.h"

#include <string>

class Graphics;

class Enemy : AnimatedSprite
{
public:
	Enemy();
	Enemy(Graphics &graphics, std::string filepath, int ourceX, int sourceY, int width, int height, Vector2 spawnPoint, int timeToUpdate);
	virtual void update(int elapsedTime);
	virtual void draw(Graphics &graphics);

	const inline int getMaxHealth() const { return this->_maxHealth; }
	const inline int getCurrentHealth() const { return this->_currentHealth; }

protected:
	Direction _direction;

	int _maxHealth;
	int _currentHealth;

};


class Bat : public Enemy
{
public:
	Bat();
	Bat(Graphics &graphics, Vector2 spawnPoint);
	void update(int elapsedTime, Player &player);
	void draw(Graphics &graphics);

	void animationDone(std::string currentAnimation);
	void setUpAnimations();

private:

};