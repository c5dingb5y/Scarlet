#pragma once
#include "SDL.h"

namespace SDL_System {
	class error {
	public:
		void showErrorWindow(const char* errorTitle, const char* errorMessage, int errorCode);
	};
}