#pragma once
#include <raylib.h>

class Ball
{
protected:
	int centerX = 400;
	int centerY = 225;
	
	float radius = 25;
	float velocityY = 0.0f;
	float screenHeight = 450.0f;

	Color color = MAGENTA;

public:

	Ball(flo);
	void Draw();
	void Update();
};
