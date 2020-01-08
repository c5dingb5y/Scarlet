#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_ttf.h"
#include "SDL_mixer.h"

namespace SDL_System {
	class Initializer {
	public:
		void InitAll();
	private:
		void InitSdl();
		void InitSdlImage();
		void InitSdlTtf();
	};

	extern class Initializer systemInitalizer;
}