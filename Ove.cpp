#include "Ove.h"

Ove::Ove(float startX, float startY, float radX, float radY)
{
	m_Position.x = startX;
	m_Position.y = startY;

	m_Shape.setScale(1.f, 1.5f);
	m_Shape.setPosition(m_Position);

	m_Shape.setRadius(radX); 
	m_Shape.setScale(radX / m_Shape.getRadius(), radY / m_Shape.getRadius());
	m_Shape.setPosition(m_Position); 

}

sf::FloatRect Ove::getBounds() {
	return m_Shape.getGlobalBounds();  // Correctly returns the hit box (FloatRect)
}



sf::Vector2f Ove::getPosition()
{
	return m_Shape.getPosition();
}


CircleShape Ove::getShape()
{
	return m_Shape;
}