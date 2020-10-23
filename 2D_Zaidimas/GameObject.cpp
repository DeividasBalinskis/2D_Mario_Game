#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* texturesheet, int x, int y)
{
	objTexture = TextureManager::LoadTexture(texturesheet);

	xpos = x;
	ypos = y;
}

void GameObject::Update()
{
	xpos++;
	ypos++;

	scrRect.h = 525;
	scrRect.w = 572;
	scrRect.x = 0;
	scrRect.y = 0;

	destRect.x = xpos;
	destRect.y = ypos;
	destRect.w = 64;
	destRect.h = 64;
}

void GameObject::Render()
{
	SDL_RenderCopy(Game::renderer, objTexture, &scrRect, &destRect);
}
