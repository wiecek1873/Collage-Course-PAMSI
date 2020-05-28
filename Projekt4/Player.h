#pragma once
#include "Board.h"
#include <algorithm>

class Player
{

protected:
	bool _white;
public:
	std::pair<int, int> choseMan(Board board);
	void move(Board& board);
	std::pair<int, int> beatAgain(Board& board);

	Player(bool white);
	std::vector<std::pair<int, int>> mansLeft(Board board, bool white);
	std::vector<std::pair<int, int>> kingsLeft(Board board, bool white);
	std::vector<std::pair<int, int>> availableMoves(Board board, int x, int y);
	std::vector<std::pair<int, int>> checkBeats(Board board, int x, int y);


};

