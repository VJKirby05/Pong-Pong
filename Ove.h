#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Ove
{
private:
	Vector2f m_Position;

	// A CircleShape object
	CircleShape m_Shape;

	

public:
	Ove(float startX, float startY, float radX, float radY);

	Vector2f getPosition();

	CircleShape getShape();

	FloatRect getBounds();
	
	
};

