#include "game.hpp"

Game *game = nullptr;

int main(int argc, char const *argv[])
{
    game = new Game();

    game->init("game2d v0.0.1", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 768, false);

    while (game->running())
    {
        game->handleEvents();
        game->update();
        game->render();
    }

    game->clean();

    return 0;
}
