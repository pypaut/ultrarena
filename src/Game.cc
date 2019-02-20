#include "Game.hh"

void Game::init(const char* title, int x, int y, int w, int h, bool fscreen)
{
	isRunning_ = true;

	if (SDL_Init(SDL_INIT_EVERYTHING))
	{
		SDL_Log("Could not init SDL : %s", SDL_GetError());
		isRunning_ = false;
	}

	int winflag = 0;
	if (fscreen)
	{
		winflag = SDL_WINDOW_FULLSCREEN;
	}

	window_ = SDL_CreateWindow(title, x, y, w, h, winflag);
	if (!window_)
	{
		SDL_Log("Could not create window : %s", SDL_GetError());
		isRunning_ = false;
	}

	renderer_ = SDL_CreateRenderer(window_, -1, 0);
	if (!renderer_)
	{
		SDL_Log("Could not create renderer : %s", SDL_GetError());
		isRunning_ = false;
	}
	SDL_SetRenderDrawColor(renderer_, 255, 255, 255, 255);
	
}

void Game::handle_events()
{
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type)
	{
		case SDL_QUIT:
			isRunning_ = false;
			break;
		default:
			break;
	}
	
}

void Game::update()
{

}

void Game::render()
{
	SDL_RenderClear(renderer_);
	SDL_RenderPresent(renderer_);
}

void Game::clear()
{
	SDL_DestroyRenderer(renderer_);
	SDL_DestroyWindow(window_);
	SDL_Quit();
}

bool Game::is_running()
{
	return isRunning_;
}
