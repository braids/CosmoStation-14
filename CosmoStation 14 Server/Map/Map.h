#pragma once
#ifndef _MAP_H_
#define _MAP_H_

#define MAP_WIDTH 16
#define MAP_HEIGHT 16

class Map;
class Tile;

class Map {
private:

	Tile* mapTiles[MAP_WIDTH][MAP_HEIGHT];

public:
	Map(int width, int height);
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
