#pragma once

#include "Board.h"
#inlcude "Location.h"

class Snake {

private:
	class Segment {

	public: 
		void Init(Location loc) 
		{ 
			
		}
	private:
		Location myLoc;
		Color myColor;
	};

public:
//Constructor 
	Snake(const Location & loc);

//Modifier
	void MoveBy(const Location & delta_loc);

//Accessor

private:
	static constexpr Color myHeadColor = Colors::Yellow;
	static constexpr Color myBodyColor = Colors::Green;
	static constexpr int myMaxSegments = 100;
	Segment mySegments[myMaxSegments];
	int mySegmentSize = 1;
};
