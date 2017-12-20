#ifndef TILE_H_INCLUDE
#define TILE_H_INCLUDE

#include<iostream>
#include<vector>

using std::string;

class Tile
{
  public:
	Tile() : mapout('`'), terrain("Empty"), bound(false), xcoord(-1), ycoord(-1) {}
	Tile(int x, int y) : mapout('`'), terrain("Flat"), bound(false), xcoord(x), ycoord(y) {}
	inline string getTerrain() {return terrain;}
	inline bool isBound(){return bound;}
	inline void bind(){bound = true;}
	inline void unbind(){bound = false;}
	inline void setMapOut(char newout) {mapout = newout;}
	inline char Char() {return mapout;}
	
  private:
	char mapout;
	string terrain;
	bool bound;
	int xcoord;
	int ycoord;

};






#endif
