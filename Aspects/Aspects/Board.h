#pragma once

#include<vector>

#include "Tile.h"
#include "Player.h"

using namespace std;

// This class represents the game board

class Board
{
public:
	Board();
	~Board();
private:

	// The Player object corresponding to Player 1
	Player p1;

	// The Player object corresponding to Player 2
	Player p2;

	// The Tile array holding all the tiles on the board
	Tile board[80][40];
};

