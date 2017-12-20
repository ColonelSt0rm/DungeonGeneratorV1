#include"dungeon.h"
#include"tile.h"
#include<iostream>

using std::cout;
using std::cerr;
using std::endl;


void Dungeon::printDungeon()
{
  for(int h = 0; h < height; h++)
  {
    for(int w = 0; w < width; w++)
    {
	cout << map[h][w].Char();
    }
    cout << endl;
  }
}

void Dungeon::newBlankMap()
{
  map.resize(height);
  for(int a = 0; a < height; a++)
  {
    map.at(a).resize(width);
    for(int b = 0; b < width; b++)
    {
	Tile t = Tile(b, a);
	map.at(a).push_back(t);
    }
  }
}
