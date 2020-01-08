#include "Initializer.h"
#include <iostream>

void SDL_System::Initializer::InitAll() {
	InitSdl();
	InitSdlImage();
	InitSdlTtf();
}
void SDL_System::Initializer::InitSdl() {
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		//오류출력
	}
}
void SDL_System::Initializer::InitSdlImage() {
	IMG_Init(IMG_INIT_PNG);
	IMG_Init(IMG_INIT_JPG);
	IMG_Init(IMG_INIT_WEBP);
	IMG_Init(IMG_INIT_TIF);
}
void SDL_System::Initializer::InitSdlTtf() {
	TTF_Init();
}