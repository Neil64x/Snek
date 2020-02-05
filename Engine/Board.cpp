#include "Board.h"

Board::Board(Graphics & gfx)
	: myGfx (gfx)
{
}

void Board::DrawCell(const Location & loc, Color c)
{
	assert(loc.x >= 0);
	assert(loc.x < myWidth);
	assert(loc.y >= 0);
	assert(loc.y < myHeight);
	myGfx.DrawRectDim(loc.x * dimension, loc.y * dimension, dimension, dimension, c);
}

int Board::GetGridWidth() const
{
	return myWidth;
}

int Board::GetGridHeight() const
{
	return myHeight;
}
