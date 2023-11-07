#pragma once

#include <SDL2/SDL.h>

enum GameState {
    PLAY,
    EXIT
};

class Game
{
public:
    Game();
    ~Game();

    void run();
private:
    void init(const char *title, int x, int y, int w, int h, Uint32 flags);
    void gameLoop();
    void handleEvents();

    SDL_Window* window;
    SDL_Renderer* renderer;

    int screenWidth;
    int screenHeight;

    GameState gamestate;
};
