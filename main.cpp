#include <SFML/Graphics.hpp>
#include "Window.h"
#include "GameLoop.h"

int main() {

    const auto &title = "My window";
    sf::VideoMode video_mode(800, 600);
    sf::RenderWindow renderWindow(video_mode, title);
    Window window(renderWindow);
    GameLoop game(window);
    game.run();


    return 0;
}