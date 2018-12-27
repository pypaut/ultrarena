#include "include/header.h"

int main(void)
{
  /* Initialization */
  SDL_Init(SDL_INIT_VIDEO);
  if (SDL_Init(SDL_INIT_VIDEO) < 0)
  {
    fprintf(stderr, "SDL_Init failed\n");
    return 1;
  }

  /* Window */
  SDL_Window *win = SDL_CreateWindow("My Game",
    SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
    500, 400,
    SDL_WINDOW_RESIZABLE);

  SDL_Renderer *renderer = SDL_CreateRenderer(win, -1, 0);
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
  SDL_RenderClear(renderer);
  SDL_RenderPresent(renderer);


  if (!win)
  {
    fprintf(stderr, "Could not load window\n");
    SDL_Quit();
    return 1;
  }


  /* Character */
  SDL_Surface * image = SDL_LoadBMP("../pictures/sprite01.png");


  SDL_Event event;

  /* Game loop */

  int running = 1;

  while (running)
  {
    /* Event */
    if (SDL_PollEvent(&event) && (event.type == SDL_QUIT
                                  || event.key.keysym.sym == SDLK_ESCAPE))
      running = 0;

    /* Update */

    /* Render */
  }


  SDL_DestroyWindow(win);
  SDL_Quit();
  return 0;
}
