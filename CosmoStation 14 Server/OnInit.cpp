#include "CS14Server.h"
#include <iostream>

bool CS14Server::OnInit() {
	if (SDL_Init(SDL_INIT_EVENTS | SDL_INIT_TIMER) < 0) {
		std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
	}

	return true;
}