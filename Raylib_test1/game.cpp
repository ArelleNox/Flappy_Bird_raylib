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
		::ClearBackground(DARKGRAY);
		::EndDrawing();
	}
	::CloseWindow();
}

		//::DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);