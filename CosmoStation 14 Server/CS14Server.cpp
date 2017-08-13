#include "CS14Server.h"

CS14Server::CS14Server() {
	this->Running = true;
}

int CS14Server::OnExecute() {
	if (this->OnInit() == false) {
		return -1;
	}

	SDL_Event Event;

	while (this->Running) {
		while (SDL_PollEvent(&Event))
			this->OnEvent(&Event);

		this->OnLoop();
	}

	this->OnCleanup();
	
	return 0;
}



int main(int argc, char* argv[]) {
	CS14Server server;

	return server.OnExecute();
}