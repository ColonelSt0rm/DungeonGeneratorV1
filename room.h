#ifndef ROOM_H_INCLUDE
#define ROOM_H_INCLUDE

#include<iostream>
#include<vector>
#include"tile.h"

using std::cout;
using std::cerr;
using std::endl;
using std::vector;

class Room
{
  public:
    Room(int x, int y, int h, int w) : cx(x), cy(y), height(h), width(w) {}
    bool checkCollisions(vector<vector<Tile> > map, int currx, int curry);

    
  private:
    int cx;		//Top-Left Corner X Coordinate
    int cy;		//Top-Left Corner Y Coordinate
    unsigned int height;		
    unsigned int width;






};

#endif

