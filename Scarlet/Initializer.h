#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_ttf.h"
#include "SDL_mixer.h"

namespace SDL_System {
	class Initializer {
	public:
		static void InitAll();
	private:
		static void InitSdl();
		static void InitSdlImage();
		static void InitSdlTtf();
	};
}