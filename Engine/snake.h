#pragma once

#include "Board.h"
#include "Location.h"

class Snake {

private:
	class Segment {

	public: 
		void Init(const Location& loc);
		void InitBody();
		void Follow(const Segment& next);
		void MoveBy(const Location& delts_loc);
		void Draw(Board& brd) const;
		
	private:
		Location myLoc;
		Color myColor;
	};

public:
//Constructor 
	Snake(const Location & loc);

//Modifier
	void MoveBy(const Location & delta_loc);
	void Grow();
	void Draw(Board& brd) const;

//Accessor

private:
	static constexpr Color myHeadColor = Colors::Yellow;
	static constexpr Color myBodyColor = Colors::Green;
	static constexpr int myMaxSegments = 100;
	Segment mySegments[myMaxSegments];
	int mySegmentSize = 1;
};
