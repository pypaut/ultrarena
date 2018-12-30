#include "header.h"

int main(void)
{
    /* Initialization */
    init();
    SDL_Window *window = init_window();
    SDL_Renderer *renderer = init_renderer(window);

    /* Character */
    SDL_Surface *surface = SDL_LoadBMP("../../santa_sprite.bmp");

    SDL_Event event;

    /* Game loop */
    int running = 1;

    while (running)
    {
        /* Event */
        if (SDL_PollEvent(&event))
        {
            running = handle_event(event, renderer);
        }

        /* Update */

        /* Render */
    }

    free_all(window, renderer, surface);

    return 0;
}
