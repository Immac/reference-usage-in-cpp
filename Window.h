//
// Created by immac on 8/21/2017.
//

#ifndef GAME_EXAMPLE_WINDOW_H
#define GAME_EXAMPLE_WINDOW_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Window {
private:
    sf::RenderWindow &window_;

public:
    explicit Window(sf::RenderWindow &window);

    bool isOpen();

    void close();

    void display();

    bool pollEvent(sf::Event &event);

    void clear(const sf::Color &color);
};


#endif //GAME_EXAMPLE_WINDOW_H
