#pragma once

struct  Location {
	void Add(const Location & rhs)
	{
		x += rhs.x;
		y += rhs.y;
	}
	int x;
	int y;
};