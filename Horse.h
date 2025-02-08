#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

#include <string>

class Horse {
	private:
		int position;
		int index;
		int trackLength;	
	public:
		Horse();
		void setParameters(int index, int trackLength);
		void advance();
		void printLane();
		bool isWinner();
};


#endif
