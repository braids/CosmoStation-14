#include "Map.h"

Tile::Tile() {
	// Gas Init
	this->environment.gas.vaccuum = 0.0;
	this->environment.gas.pressure = 0.0;
	this->environment.gas.flowAngle = 0.0;
	this->environment.gas.flowRate = 0.0;

	// Light Init
	this->environment.light.red = 0.0;
	this->environment.light.green = 0.0;
	this->environment.light.blue = 0.0;
	this->environment.light.brightness = 0.0;

	// Temperature init
	this->environment.temp = 0.0;

	// Radiation init
	this->environment.rads = 0.0;
}