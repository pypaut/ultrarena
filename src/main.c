#include "include/header.h"

int main(void)
{
    /* Initialization */
    init();
    SDL_Window *win = init_window();
    SDL_Renderer *renderer = init_renderer(win);

    /* Character */
    //SDL_Surface * image = SDL_LoadBMP("../pictures/sprite01.png");

    SDL_Event event;

    /* Game loop */
    int running = 1;

    while (running)
    {
        /* Event */
        if (SDL_PollEvent(&event))
        { 
            if (event.key.keysym.sym == SDLK_ESCAPE)
                running = 0;

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
        }

        /* Update */

        /* Render */
    }


    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
