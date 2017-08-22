//
// Created by immac on 8/21/2017.
//

#ifndef GAME_EXAMPLE_GAMELOOP_H
#define GAME_EXAMPLE_GAMELOOP_H


#include "Window.h"

class GameLoop {
private:
    Window window_;
public:
    GameLoop(Window& window);

    void run();
};


#endif //GAME_EXAMPLE_GAMELOOP_H
