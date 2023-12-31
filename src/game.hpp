#pragma once

#include <SDL2/SDL.h>
#include <iostream>

class Game
{
public:
    Game();
    ~Game();

    void init(const char* title, int x, int y, int width, int height, bool fullscreen);
 
    void handleEvents();
    void update();
    void render();
    void clean();

    bool running() { return this->isRunning; };
    
private:
    int count = 0;
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;
};
