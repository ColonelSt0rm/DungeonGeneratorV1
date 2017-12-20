CC=g++
CFLAGS=-Wall -I . -c

Generate: dungeon.o room.o tile.o main.o
	$(CC) -o Generate dungeon.o room.o tile.o main.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

dungeon.o: dungeon.cpp
	$(CC) $(CFLAGS) dungeon.cpp

room.o: room.cpp
	$(CC) $(CFLAGS) room.cpp

tile.o: tile.cpp
	$(CC) $(CFLAGS) tile.cpp

clean:
	rm *.o
	
cleanall:
	rm *.o Generate
