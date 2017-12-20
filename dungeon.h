#ifndef DUNGEON_H_INCLUDE
#define DUNGEON_H_INCLUDE

#include<iostream>
#include<vector>
#include"tile.h"
#include"room.h"

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::vector;
class Dungeon
{
  public:
	Dungeon(int h, int w) : height(h), width(w) {newBlankMap();}
	void printDungeon();
	void newBlankMap();
  private:
	vector< vector<Tile> > map;
	int height;
	int width;

};


#endif
