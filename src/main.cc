#include "Game.hh"



int main(void)
{
	int x = SDL_WINDOWPOS_CENTERED;
	int y = SDL_WINDOWPOS_CENTERED;
	int w = 1400;
	int h = 800;

	Game* game = new Game();
	game->init("UltrArena", x, y, w, h, false);

	while (game->is_running())
	{
		game->handle_events();
		game->update();
		game->render();
	}

	game->clear();

	return 0;
}
