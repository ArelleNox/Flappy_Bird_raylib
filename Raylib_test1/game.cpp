#include "game.h"
#include "ball.h"	

Game::Game() {}

void Game::loop()
{
	Ball ball;
	::InitWindow(width, height, "test1");
	::SetTargetFPS(60);

	while (!::WindowShouldClose())
	{
		::BeginDrawing();
		ball.Draw();
		ball.Update();
		::ClearBackground(DARKGRAY);
		::EndDrawing();
	}
	::CloseWindow();
}