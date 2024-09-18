#include<SFML/Graphics.hpp>
#include "Player.h"
using namespace sf;
using namespace std;

void handleInput(Player& player) {
	if (Keyboard::isKeyPressed(Keyboard::Left)) player.move(-1, 0);
	if (Keyboard::isKeyPressed(Keyboard::Right)) player.move(1, 0);
	if (Keyboard::isKeyPressed(Keyboard::Up)) player.move(0, -1);
	if (Keyboard::isKeyPressed(Keyboard::Down)) player.move(0, 1);
}

Player player;

int main() {

	RenderWindow window(VideoMode(800, 600), "Pacman Game", Style::Close); window.setFramerateLimit(60);

	Event event;

	while (window.isOpen()) {

		while (window.pollEvent(event)) {

			if (event.type == Event::Closed) { window.close(); }

		}

		handleInput(player);


		window.clear((Color::Black));


		window.display();
	}

	return 0;
}