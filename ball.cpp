
#include "ball.h"
#include <SFML/Graphics.hpp>

using namespace sf;

Ball::Ball(Color _color, float _radius, Vector2f _pos, Vector2f _velocity) :
    m_velocity(_velocity)
{
    m_circle.setRadius(_radius);
    m_circle.setFillColor(_color);
    m_circle.setOutlineColor(_color);
    m_circle.setPosition(_pos);
}

void Ball::update()
{
    m_circle.move(m_velocity);
}

void Ball::setPosition(Vector2f _pos)
{
    m_circle.setPosition(_pos);
}

void Ball::setVelocity(Vector2f _velocity)
{
    m_velocity = _velocity;
}

void Ball::draw(sf::RenderTarget& _target, sf::RenderStates _states) const
{
    _target.draw(m_circle, _states);
}
