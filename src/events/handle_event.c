#include "header.h"

int handle_event(SDL_Event event, SDL_Renderer *renderer)
{
    if (event.key.keysym.sym == SDLK_ESCAPE)
    return 0;

    else if (event.key.keysym.sym == SDLK_RIGHT)
    {
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }

    else if (event.type == SDL_KEYDOWN)
    {
        SDL_SetRenderDrawColor(renderer, rand() % 255, rand() % 255, rand() % 255, 255);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }

    return 1;
}
