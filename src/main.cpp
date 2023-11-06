#include <SDL2/SDL.h>

int main(int argc, char const *argv[])
{
    SDL_Window* window = NULL;

    if ( SDL_Init(SDL_INIT_VIDEO) == 0 )
        window = SDL_CreateWindow("game2d", 50, 50, 640, 480, 0);
    else
        SDL_Log("Erro na inicialização: %s", SDL_GetError());

    if ( window != NULL )
        while( !SDL_QuitRequested() ) {

        }
    else
        SDL_Log("Erro na criação da janela: %s", SDL_GetError());

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
