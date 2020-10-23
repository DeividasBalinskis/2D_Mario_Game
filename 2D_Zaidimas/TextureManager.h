#pragma once

//#include "SDL_image.h"
#include "Game.h"

class TextureManager
{

public:
	static SDL_Texture* LoadTexture(const char* fileName);
	static void Draw(SDL_Texture* tex, SDL_Rect src, SDL_Rect dest, SDL_RendererFlip flip);
};