#include "enemy.h"

//Base Enemy Class
Enemy::Enemy() {}

Enemy::Enemy(Graphics &graphics, std::string filePath, int sourceX, int sourceY, int width, int height, Vector2 spawnPoint, int timeToUpdate) :
	AnimatedSprite(graphics, filePath, sourceX, sourceY, width, height, spawnPoint.x, spawnPoint.y, timeToUpdate),
	_direction(LEFT),
	_maxHealth(0),
	_currentHealth(0)
{}

void Enemy::update(int elapsedTime)
{
	AnimatedSprite::update(elapsedTime);
}

void Enemy::draw(Graphics &graphics)
{
	AnimatedSprite::draw(graphics, this->_x, this->_y);
}


//Bat Class
Bat::Bat() {}

Bat::Bat(Graphics &graphics, Vector2 spawnPoint) :
	Enemy(graphics, "content/sprites/NpcCemet.png", 32, 32, 16, 16, spawnPoint, 140)
{
	this->setUpAnimations();
	this->playAnimation("FlyLeft");
}

void Bat::update(int elapsedTime, Player &player)
{
	Enemy::update(elapsedTime);
}

void Bat::draw(Graphics &graphics)
{
	Enemy::draw(graphics);
}

void Bat::animationDone(std::string currentAnimation)
{}

void Bat::setUpAnimations()
{
	this->addAnimations(3, 2, 32, "FlyLeft", 16, 16, Vector2(0, 0));
	this->addAnimations(3, 2, 48, "flyRight", 16, 16, Vector2(0, 0));
}


