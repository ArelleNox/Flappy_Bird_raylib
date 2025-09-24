#include "ball.h"

Ball::Ball(){}

void Ball::Draw() {
	::DrawCircle(centerX, centerY, radius, color);
}

void Ball::Update() {
    if (IsKeyDown(KEY_RIGHT)) ballPosition.x += 2.0f;
    if (IsKeyDown(KEY_LEFT)) ballPosition.x -= 2.0f;
    if (IsKeyDown(KEY_UP)) ballPosition.y -= 2.0f;
    if (IsKeyDown(KEY_DOWN)) ballPosition.y += 2.0f;
}