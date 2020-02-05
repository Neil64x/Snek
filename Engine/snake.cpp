#include "snake.h"

Snake::Snake(const Location & loc)
{
	mySegments[0].Init(loc);
}

void Snake::MoveBy(const Location & delta_loc)
{
	for (int i = mySegmentSize - 1; i > 0; i--)
	{
		mySegments[i].Follow(mySegments[i - 1]);
	}
	mySegments[0].MoveBy(delta_loc);
	
}

void Snake::Grow()
{
	if (mySegmentSize < myMaxSegments)
	{
		mySegmentSize++;
	}
}

void Snake::Draw(Board & brd) const
{
	for (int i = 0; i < mySegmentSize; ++i)
	{
		mySegments[i].Draw(brd);
	}
}

void Snake::Segment::Init(const Location & loc)
{
	myLoc = loc;
	myColor = Snake::myHeadColor;
}

void Snake::Segment::InitBody()
{
	myColor = Snake::myBodyColor;
}

void Snake::Segment::Follow(const Segment & next)
{
	myLoc = next.myLoc;
}

void Snake::Segment::MoveBy(const Location & delta_loc)
{
	assert(abs(delta_loc.x) + abs(delta_loc.y) == 1);
	myLoc.Add(delta_loc);
}

void Snake::Segment::Draw(Board & brd) const
{
	brd.DrawCell(myLoc, myColor);
}
