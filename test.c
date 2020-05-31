#include <SDL.h>
#include <stdio.h>

const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;

typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Surface *screenSurface;
} SDL_Instance;

int main(int ac, char **av)
{
	SDL_Instance instance;

	instance.window = NULL;
	instance.screenSurface = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
		printf("SDL_Error: %s\n", SDL_GetError());

	instance.window = SDL_CreateWindow("nikle",
					SDL_WINDOWPOS_CENTERED,
					SDL_WINDOWPOS_CENTERED,
					SCREEN_WIDTH,
					SCREEN_HEIGHT,
					SDL_WINDOW_SHOWN);
	if (!instance.window)
		printf("SDL_Error: %s\n", SDL_GetError());

	instance.screenSurface = SDL_GetWindowSurface(instance.window);

	SDL_FillRect(instance.screenSurface,
				 NULL,
				 SDL_MapRGB(instance.screenSurface->format,
				0xFF,
				0xFF,
				0xFF));

	SDL_UpdateWindowSurface(instance.window);
	SDL_Delay(10000);

	SDL_DestroyWindow(instance.window);
	SDL_Quit();

	return (0);
}
