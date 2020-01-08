/* C++ Headers */
#include <iostream>

/* Headers */
#include "Initializer.h"
#include "Error.h"

using namespace std;

int main(int argc, char* args[]) {
	SDL_System::Initializer::InitAll();

	return 0;
}