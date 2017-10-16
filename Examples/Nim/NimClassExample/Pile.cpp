#include "Pile.h"

int Pile:: takeSticks(int numSticks)
{
	pileSize -= numSticks;
	return pileSize;
}