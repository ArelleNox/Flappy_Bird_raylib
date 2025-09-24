#pragma once
#include <raylib.h>

class Ball
{
protected:
	int centerX = 400;
	int centerY = 225;
	float radius = 25;
	Color color = MAGENTA;

public:

	Ball();
	void Draw();
	void Update();
};

