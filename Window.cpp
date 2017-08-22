//
// Created by immac on 8/21/2017.
//

#include "Window.h"

Window::Window(sf::RenderWindow &window)
        : window_(window) {

}

bool Window::isOpen() {
    return window_.isOpen();
}

bool Window::pollEvent(sf::Event &event) {
    return window_.pollEvent(event);
}

void Window::close() {
    window_.close();
}

void Window::display() {
    window_.display();
}

void Window::clear(const sf::Color& color) {
    window_.clear(color);
}
