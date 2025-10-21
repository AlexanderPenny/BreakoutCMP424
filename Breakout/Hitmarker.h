#pragma once
#include <SFML/Graphics.hpp>

class Hitmarker {

public:

	Hitmarker(sf::RenderWindow* window, sf::Vector2f spawnPosition);
	~Hitmarker();

	void update(float dt);
	void render();

private:

	sf::Text _text;
	sf::Font _font;
	sf::RenderWindow* _window;


};
