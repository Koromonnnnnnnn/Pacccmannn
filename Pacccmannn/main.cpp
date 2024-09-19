#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Level.h"

using namespace sf;
using namespace std;

void handleInput(Player& player, float deltaTime) {
    const float speed = 200.0f;
    if (Keyboard::isKeyPressed(Keyboard::Left)) player.move(-speed * deltaTime, 0);
    if (Keyboard::isKeyPressed(Keyboard::Right)) player.move(speed * deltaTime, 0);
    if (Keyboard::isKeyPressed(Keyboard::Up)) player.move(0, -speed * deltaTime);
    if (Keyboard::isKeyPressed(Keyboard::Down)) player.move(0, speed * deltaTime);
}

int main() {
    RenderWindow window(VideoMode(800, 600), "Pacman Game", Style::Close);
    window.setFramerateLimit(60);

    Player player;
    Level level;

    Event event;
    Clock clock; 

    while (window.isOpen()) {
        float deltaTime = clock.restart().asSeconds(); 

        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }

        handleInput(player, deltaTime); 

        window.clear(Color::Black);

        level.draw(window);

        window.display();
    }

    return 0;
}
