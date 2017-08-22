//
// Created by immac on 8/21/2017.
//

#include "GameLoop.h"

GameLoop::GameLoop(Window &window)
        : window_(window) {

}

void GameLoop::run() {
    while (window_.isOpen()) {
        sf::Event event {};
        while (window_.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window_.close();
        }
        window_.clear(sf::Color::Black);
        // window_.draw(...);
        window_.display();
    }
}
