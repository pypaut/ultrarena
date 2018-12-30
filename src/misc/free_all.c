#include "header.h"

void free_all(SDL_Window *win, SDL_Renderer *renderer, SDL_Surface *surface)
{
    SDL_FreeSurface(surface);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(win);
    SDL_Quit();
}
