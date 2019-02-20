#include <SDL2/SDL.h>

class Game
{
	public:
		Game() = default;
		~Game() = default;

		void init(const char* title, int x, int y, int w, int h, bool fscreen);
		void handle_events();
		void update();
		void render();
		void clear();
		bool is_running();
			
	private:
		bool isRunning_;
		SDL_Window* window_;
		SDL_Renderer* renderer_;
}; /* class Game */
