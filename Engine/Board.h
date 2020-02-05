#pragma once

#include "Graphics.h"
#include "Location.h"
#include <assert.h>

class Board {

public:
//Constructors
	Board(Graphics& gfx);
//Modifiers
	void DrawCell(const Location& loc, Color c);

//Accessors
	int GetGridWidth() const;
	int GetGridHeight() const;
private:
	static constexpr int dimension = 10;
	int myWidth = 80;
	int myHeight = 60;
	Graphics& myGfx;
};
