/* C++ Headers */
#include <iostream>

/* Headers */
#include "Initialize.h"
#include "Error.h"

using namespace std;

int main(int argc, char* args[]) {
	SDL_System::systemInitalizer.initEverything();

	return 0;
}