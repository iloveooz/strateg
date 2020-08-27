#include "Game.hpp"

Game::Game() : m_window(new sf::RenderWindow(sf::VideoMode(800, 600), "STRATEG!")) {
    m_window->setFramerateLimit(60);
}

Game::~Game() {
	delete m_window;
}

void Game::run() {
    while (m_window->isOpen()) {
		update();
		render();
    }
}

void Game::updateEvents() {
    while (m_window->pollEvent(m_event)) {
        if (m_event.type == sf::Event::Closed)
            m_window->close();
    }
}

void Game::update() {
    updateEvents();
}

void Game::render() {
    m_window->clear();

	// Rendering items

    m_window->display();
}
