#include "ball.h"

Ball::Ball(){}

void Ball::Draw() {
	::DrawCircle(centerX, centerY, radius, color);
}

void Ball::Update() {
    if (::IsKeyPressed(KEY_SPACE)) 
    {
        velocityY = -10.0f;
    }

    velocityY += 0.5f;
    centerY += (int)velocityY; /*(int) = type cast*/ 
}
