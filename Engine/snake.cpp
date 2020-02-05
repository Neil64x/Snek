#include "snake.h"

Snake::Snake(const Location & loc)
{
	mySegments[0].Init(loc);
}
