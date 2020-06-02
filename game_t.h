#ifndef _GAME_T_
#define _GAME_T_

#include <stdio.h>
#include <SDL.h>

/**
 * struct SDL_Instance - SDL Instance for Window.
 *
 * @screenSurface: It's the surface of the showed window.
 */

typedef struct SDL_Instance
{
	SDL_Surface *screenSurface;
} SDL_Instance;

/* PROTOTYPES */
void Init_Window();

#endif /* __GAME_T_ */
