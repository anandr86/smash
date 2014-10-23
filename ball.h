
#ifndef __BALL_H__
#define __BALL_H__

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Ball : public sf::Drawable
{
    private:
        sf::CircleShape m_circle;
        sf::Vector2f m_velocity;
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    public:
        Ball(sf::Color color, float radius, sf::Vector2f pos, sf::Vector2f initial_velocity);
        void setVelocity(sf::Vector2f velocity);
        void setPosition(sf::Vector2f pos);
        void update();
};

#endif // __BALL_H__
