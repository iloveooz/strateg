#include "Game.hpp"

Game::Game() : m_renderWindow(new sf::RenderWindow(sf::VideoMode(800, 600), "STRATEG!")) {
    m_renderWindow->setFramerateLimit(60);
}

Game::~Game() {
	delete m_renderWindow;
}

void Game::run() {
    while (m_renderWindow->isOpen()) {

        updateDeltaTime();
    	
		update();
		render();
    }
}

void Game::updateDeltaTime() {
    m_dDelta = m_clockDelta.restart().asSeconds();
}

void Game::updateEvents() {
    while (m_renderWindow->pollEvent(m_Event)) {
        if (m_Event.type == sf::Event::Closed)
            m_renderWindow->close();
    }
}

void Game::update() {
    updateEvents();
}

void Game::render() {
    m_renderWindow->clear();

	// Rendering items

    m_renderWindow->display();
}
