/*************************************
 Learn C++ Programming by Making Games
 Example 12.1 - NIM with functions
 Source file for main game loop
*************************************/

#include <iostream>
#include "nimFunctions.h"
using namespace std;

// The main NIM Program
int main()
{
  // Start by saying hello to the player
  welcomeMessage();

  // Now, let's ask the human player who goes first
  bool currentPlayer = pickFirstPlayer();
  
  // Now that we know who plays first, we can start 
  // the game by initializing the heap of sticks
  int nimSticks = 22;

  // CORE GAME LOOP: as long as there are sticks left,
  // we'll need to get moves from the opponents
  while( !isGameOver( nimSticks) )
  {
    // Show the status of the game
    gameStatus( nimSticks );

    // Let's get a move from the current player
    int currentPlayerMove;
    if( currentPlayer == HUMAN_PLAYER )
      currentPlayerMove = getHumanPlayerMove( nimSticks );
    else
      currentPlayerMove = getComputerPlayerMove( nimSticks );

    // Now that we know how many sticks the current 
    // player wants to take, we remove them from the
    // pile
    nimSticks -= currentPlayerMove;

    // Do we have a winner?
    if( isGameOver( nimSticks ) )
      congratulateWinner( currentPlayer );
 
    // If there are sticks left in the pile, it is
    // now the other player's turn
    else
      currentPlayer = !currentPlayer;
  }
  
  // And we're done!
  return 0;
}

