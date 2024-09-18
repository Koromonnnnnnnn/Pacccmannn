#include<SFML/Graphics.hpp>
using namespace sf;
using namespace std;

int main() {

	RenderWindow window(VideoMode(800, 600), "Pacman Game", Style::Fullscreen); window.setFramerateLimit(60);

	Event event;

	while (window.isOpen()) {

		while (window.pollEvent(event)) {

			if (event.type == Event::Closed) { window.close(); }

		}

		window.clear((Color::Black));



		window.display();
	}

	return 0;
}