
#include "ball.h"
#include <SFML/Graphics.hpp>

using namespace sf;

class SmashGame {
    private:
        RenderWindow m_game_window;
        Ball m_ball;

    public:
        SmashGame();
        void update();
        void draw();
        void run();
};

SmashGame::SmashGame() :
    m_game_window(VideoMode(800, 600), "Smash", Style::Titlebar | Style::Close),
    m_ball(Color::Red, 25.0f, Vector2f(0, 0), Vector2f(0.05, 0))
{
}

void SmashGame::update()
{
    m_ball.update();
}

void SmashGame::draw()
{
    m_game_window.draw(m_ball);
}

void SmashGame::run()
{
    while(m_game_window.isOpen()) {
        Event evt;

        while(m_game_window.pollEvent(evt)) {
            if(evt.type == Event::Closed) {
                m_game_window.close();
            }
        }

        update();

        m_game_window.clear(Color::Black);
        draw();
        m_game_window.display();
    }
}

int main()
{
    SmashGame game;

    game.run();
    return 0;
}
