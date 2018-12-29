#include "../include/header.h"

void init(void)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        fprintf(stderr, "SLD_Init failed\n");
        exit(1);
    }
}


SDL_Window *init_window(void)
{
    SDL_Window *win = SDL_CreateWindow("My Game",
            SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
            500, 400,
            SDL_WINDOW_RESIZABLE);
    if (!win)
    {
        fprintf(stderr, "Window could not be loaded\n");
        SDL_Quit();
        return NULL;
    }

    return win;
}


SDL_Renderer *init_renderer(SDL_Window *win)
{
    SDL_Renderer *renderer = SDL_CreateRenderer(win, -1, 0);
    SDL_SetRenderDrawColor(renderer, 0, 255, 255, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    return renderer;
}
