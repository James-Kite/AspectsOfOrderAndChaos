#pragma once

#include<vector>

#include "Tile.h"
#include "Player.h"

using namespace std;

class Board
{
public:
	Board();
	~Board();
private:
	Player p1;
	Player p2;
	Tile board[80][40];
	// making a change to the file
};

