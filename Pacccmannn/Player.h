#pragma once

#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

class Player {
public:
	Player();
	void move(float deltaX, float deltaY);
	void draw(RenderWindow& window);
	
private:
	CircleShape shape;
};