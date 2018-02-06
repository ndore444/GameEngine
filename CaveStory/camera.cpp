#include "camera.h"

#include "player.h"
#include "globals.h"

#include <iostream>

Camera::Camera()
{
	_camBool = true;
}

void Camera::update(int elapsedTime, Player player)
{
	_x = (player.getX() - globals::SCREEN_WIDTH / 2);
	_y = (player.getY() - (globals::SCREEN_HEIGHT / 2));

	std::cout.setf(std::ios::fixed);
	std::cout.setf(std::ios::showpoint);
	std::cout.precision(2);

	std::cout << "C.X->" << _x << "\t\t" << "P.X->" <<player.getX() << std::endl;
}