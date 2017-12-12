#pragma once

#include "sdlobject.h"
#include "objects.h"
#include "vector.h"

#include <SDL2/SDL.h>

#include <cstdint>

namespace Display {

class Surface : private SDLObject
{
public:
	Surface(Pixel dimensions);
	~Surface();

	void Clear(Color backgroundColor);
	void SetPixel(Pixel pixel, Color currentColor);
	void DrawLine(Pixel p1, Pixel p2, Color color);

	int GetH();
	int GetW();

private:

	friend class Window;

	SDL_Surface* mSurface;
};

}
