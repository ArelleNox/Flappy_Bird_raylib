#pragma once
#include <raylib.h>

class Game
{
protected:
	int width = 800;
	int height = 450;

public:
	Game();
	void loop();
};