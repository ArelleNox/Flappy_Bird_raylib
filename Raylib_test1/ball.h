#pragma once
#include <raylib.h>

class Ball
{
protected:
	int centerX = 400;
	int centerY = 225;
	float radius = 25;
	Color color = MAGENTA;

	float velocityY = 0.0f;

public:

	Ball();
	void Draw();
	void Update();
};
