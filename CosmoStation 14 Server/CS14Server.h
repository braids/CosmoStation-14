#pragma once
#ifndef _CS14SERVER_H_
#define _CS14SERVER_H_

#include <SDL2/SDL.h>

class CS14Server {
private:
	bool Running;

public:
	CS14Server();

	int OnExecute();
	bool OnInit();
	void OnEvent(SDL_Event* Event);
	void OnLoop();
	void OnCleanup();
};

#endif // !_CS14SERVER_H_
