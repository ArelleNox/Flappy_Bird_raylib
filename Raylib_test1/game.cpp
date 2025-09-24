#include "game.h"

Game::Game() {}

void Game::loop()
{
	::InitWindow(width, height, "test1");
	::SetTargetFPS(60);

	while (!::WindowShouldClose())    // Detect window close button or ESC key
	{
		::BeginDrawing();
		::ClearBackground(RAYWHITE);
		::DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
		::EndDrawing();
	}
	::CloseWindow();
}
