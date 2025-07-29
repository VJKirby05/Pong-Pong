#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>

using namespace sf;

class Ball
{
private:
	Vector2f m_Position;	
	RectangleShape m_Shape;

	float m_Speed = 1000.0f;
	float m_DirectionX = .2f;
	float m_DirectionY = .2f;

public:
	Ball(float startX, float startY, float speed, Color fillColor);

	void setPosition();
	FloatRect getPosition();

	RectangleShape getShape();

	float getXVelocity();

	void reboundSides();

	void reboundBatOrTop();

	void reboundBottom();

	void update(Time dt);

	void changeSpeed(float multiplier);	//can change speed of ball

	void setSpeed(float speed);	//can change speed of ball

};
