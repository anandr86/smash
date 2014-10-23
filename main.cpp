
#include <SFML/Graphics.hpp>

using namespace sf;

class SmashGame {
    private:
        RenderWindow m_game_window;

    public:
        SmashGame();
        void update();
        void draw();
        void run();
};

SmashGame::SmashGame()
    : m_game_window(VideoMode(800, 600), "Smash", Style::Titlebar | Style::Close)
{
}

void SmashGame::update()
{
}

void SmashGame::draw()
{
}

void SmashGame::run()
{
    while(m_game_window.isOpen()) {
        Event evt;

        while(m_game_window.pollEvent(evt)) {
            if(evt.type == Event::Closed) {
                m_game_window.close();
            }

            m_game_window.clear(Color::Black);
            m_game_window.display();
        }
    }
}

int WinMain()
{
    SmashGame game;

    game.run();
    return 0;
}
