#ifndef HEADER_H
# define HEADER_H
# include <SDL2/SDL.h>
# include <stdio.h>
// # include <SDL/SDL_image.h>

struct character
{
    char *name;
    int hp;
    int mana;
    int stam;
    SDL_Rect *rect;

    /* Sprites */
    char **r_run_sprite;
    char **l_run_sprite;
    int run_len;

    char **r_jump_sprite;
    char **l_jump_sprite;
    int jump_len;

    /* Super sprites */
    char **r_run_sprite_sup;
    char **l_run_sprite_sup;
    int run_len_sup;

    char **r_jump_sprite_sup;
    char **l_jump_sprite_sup;
    int jump_len_sup;

    /* Musics */
    /* Victory, defeat sound */
    /* Fight noises */
};


struct map
{
    char *name;
    char *background;

    char *block_sprite;
    int nb_blocks;

    struct character *enemies;
    int nb_enemies;
};


/* Init */
void init(void);
SDL_Window *init_window(void);
SDL_Renderer *init_renderer(SDL_Window *win);

/* Event */
int handle_event(SDL_Event event, SDL_Renderer *renderer);


/* Free */
void free_all(SDL_Window *window, SDL_Renderer *renderer, SDL_Surface *surface);


#endif
