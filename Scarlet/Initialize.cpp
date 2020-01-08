#include "Initialize.h"
#include <iostream>

void SDL_System::initialize::initEverything() {
	init_SDL();
	init_SDL_image();
	init_SDL_ttf();
}
void SDL_System::initialize::init_SDL() {
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		//오류출력
	}
}
void SDL_System::initialize::init_SDL_image() {
	IMG_Init(IMG_INIT_PNG);
	IMG_Init(IMG_INIT_JPG);
	IMG_Init(IMG_INIT_WEBP);
	IMG_Init(IMG_INIT_TIF);
}
void SDL_System::initialize::init_SDL_ttf() {
	TTF_Init();
}

class SDL_System::initialize SDL_System::systemInitalizer;