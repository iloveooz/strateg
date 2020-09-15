#pragma once

#include "State.hpp"

class Game {
public:
	Game();
	virtual ~Game();

	void run();

	void updateDeltaTime();
	void updateEvents();
	void update();

	void render();

private:
	sf::RenderWindow* m_renderWindow;
	sf::Event m_Event;

	sf::Clock m_clockDelta;
	double m_dDelta;
};

