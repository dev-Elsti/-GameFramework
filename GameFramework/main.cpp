#include"Game.h"

Game*g_game = 0;

int main(int argc, char*argv[])
{
	g_game = new Game();
	g_game->init("Chapter 2", 640, 480, 640, 480, true);

	while (g_game->running())
	{
		g_game->handleEvents();
		g_game->update();
		g_game->render();
		SDL_Delay(10); // add the delay
	}
	g_game->clean();
	return 0;
}
