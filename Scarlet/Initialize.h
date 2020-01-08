#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_ttf.h"
#include "SDL_mixer.h"

namespace SDL_System {
	class initialize {
	public:
		void initEverything();
	private:
		void init_SDL();
		void init_SDL_image();
		void init_SDL_ttf();
	};

	extern class initialize systemInitalizer;
}