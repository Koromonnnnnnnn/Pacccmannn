#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

using namespace std;
using namespace sf;

class Level {
	public:
		Level();
		void loadLevel();
		void draw(RenderWindow& window);

	private:
		vector<RectangleShape> walls;
		const int tileSize = 32;
};