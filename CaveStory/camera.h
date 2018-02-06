#pragma once

class Player;

class Camera
{
public:
	Camera();

	void update(int elapsedTime, Player player);

	double getX() { return _x; };;
	double getY() {return _y;};
	bool camCheck() { return _camBool; };

private:
	double _x;
	double _y;

	bool _camBool = false;
};