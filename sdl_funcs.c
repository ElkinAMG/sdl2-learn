#include "game_t.h"

#define W_WIDTH 1280
#define W_HEIGHT 720

void Init_Window()
{
	SDL_Window *window;                    // Declare a pointer

	SDL_Init(SDL_INIT_VIDEO);              // Initialize SDL2

	// Create an application window with the following settings:
	window = SDL_CreateWindow(
		"SDL2 Window",                     // window title
		SDL_WINDOWPOS_CENTERED,              // initial x position
		SDL_WINDOWPOS_CENTERED,              // initial y position
		W_WIDTH,                               // width, in pixels
		W_HEIGHT,                               // height, in pixels
		SDL_WINDOW_OPENGL                  // flags - see below
		);

	// Check that the window was successfully created
	if (!window)
	{
		// In the case that the window could not be made...
		printf("Could not create window: %s\n", SDL_GetError());
        }

	// The window is open: could enter program loop here (see SDL_PollEvent())

	SDL_Delay(3000);  // Pause execution for 3000 milliseconds, for example

	// Close and destroy the window
	SDL_DestroyWindow(window);

	// Clean up
	SDL_Quit();
}
