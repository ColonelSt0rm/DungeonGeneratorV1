#include<iostream>
#include<vector>
#include"tile.h"
#include"dungeon.h"
#include<cstdlib>

using std::cout;
using std::cerr;
using std::endl;
using std::vector;

int main(int argc, char** argv)
{

  if(argc != 3)
  {
	cerr << "Size arguments expected!" << endl;
	return -1;
  }
  int width = atoi(argv[1]);
  int height = atoi(argv[2]);
  Dungeon dng = Dungeon(height, width);
  dng.printDungeon();
}
