#include "Map.h"

Map::Map(int width, int height) {
	// Map tile init
	for (int col = 0; col < width; col++)
		for (int row = 0; row < height; row++)
			mapTiles[col][row] = new Tile();
}