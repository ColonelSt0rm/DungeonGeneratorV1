#include"room.h"
#include<iostream>

using std::cout;
using std::cerr;
using std::endl;

bool Room::checkCollisions(vector<vector<Tile> > map, int currx, int curry)
{
  for(unsigned int y = curry; (y < height) && (y < map.size()); y++)
  {
	for(unsigned int x = currx; (x < width) && (x < map.at(y).size()); x++)
	{
		if(map.at(y).at(x).isBound())
		{
			return true;
		}
	}
  }
  return true;


}
