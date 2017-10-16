class Pile
{
	int pileSize;

public:

	Pile()
	{
		pileSize = 22;	// Size of the pile at the beginning of the game.
	}

	int getSize()
	{ 
		return pileSize;
	}

	int takeSticks(int numSticks);
};