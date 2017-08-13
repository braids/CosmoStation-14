#pragma once
#ifndef _MAP_H_
#define _MAP_H_

class Map;
class Tile;

class Map {

};

class Tile {
private:
	struct {
		struct {
			double vaccuum;
			double pressure;
			double flowAngle;
			double flowRate;
		} gas;
		
		struct {
			double red;
			double green;
			double blue;
			double brightness;
		} light;
		
		double temp;
		double rads;
	} environment;

public:
	Tile();
};

#endif // !_MAP_H_
