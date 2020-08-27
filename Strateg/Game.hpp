#pragma once

#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"

class Game {
public:
	Game();
	virtual ~Game();

	void run();

	void updateEvents();
	void update();

	void render();

private:
	sf::RenderWindow* m_window;
	sf::Event m_event;

	double m_delta;
};

