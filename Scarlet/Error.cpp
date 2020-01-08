#include "Error.h"

void SDL_System::error::showErrorWindow(const char* errorTitle, const char* errorMessage, int errorCode) {
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, errorTitle, errorMessage, NULL);
}