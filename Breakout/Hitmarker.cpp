#include "Hitmarker.h"

Hitmarker::Hitmarker(sf::RenderWindow* window, sf::Vector2f spawnPosition)
	: _window(window)
{

	_font.loadFromFile("font/montS.ttf");
	_text.setFont(_font);

	_text.setOutlineColor(sf::Color::White);
	_text.setCharacterSize(24);
	_text.setPosition(spawnPosition);
	_text.setString("+10");
}

Hitmarker::~Hitmarker()
{
}

void Hitmarker::update(float dt)
{

}

void Hitmarker::render()
{

	_window->draw(_text);
}