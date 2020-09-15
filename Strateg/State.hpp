#pragma once

#include <vector>
#include <iostream>

#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"

class State {
public:
	State();
	virtual ~State();

	virtual void update() = 0;
	virtual void render() = 0;

private:
	std::vector<sf::Texture> m_textures;
};

