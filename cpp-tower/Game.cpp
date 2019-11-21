/**
 * C++ class for a game of the Tower of Hanoi puzzle.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Game.h"
#include "Stack.h"
#include "uiuc/Cube.h"
#include "uiuc/HSLAPixel.h"

#include <iostream>
using std::cout;
using std::endl;

// Solves the Tower of Hanoi puzzle.
// (Feel free to call "helper functions" to help you solve the puzzle.)
void Game::solve() {
  // Prints out the state of the game:
  cout << *this << endl;
  bool done = false; 
  
  // @TODO -- Finish solving the game!
  while (done == false) 
  {
  		std::cout << "Move cube between 0 and 1" << std::endl;
		move_cube(0, 1);
  		std::cout << *this << std::endl;
  		
		std::cout << "Move cube between 0 and 2" << std::endl;
		move_cube(0, 2);
  		std::cout << *this << std::endl;
  		
		std::cout << "Move cube between 1 and 2" << std::endl;
		move_cube(1, 2);
  		std::cout << *this << std::endl;
		
		if (stacks_[2].size() == 4) 
		{
			done = true;
		}  
	}
}

void Game::move_cube(int index1, int index2)
{
	if (is_legal_move(index1, index2))
	{
		//move box from stack index1 to stack index2	
		std::cout << "Its legal to move from " << index1 << " to " << index2 << std::endl;
		stacks_[index2].push_back(stacks_[index1].removeTop());
	}
	else 
	{
		//move box from stack index2 to stack index1	
		std::cout << "Its legal to move from " << index2 << " to " << index1 << std::endl;
		stacks_[index1].push_back(stacks_[index2].removeTop());
	}
}


bool Game::is_legal_move(int index1, int index2)
{
	if ((stacks_[index1].size() > 0) && (stacks_[index2].size() == 0))
	{
		return true;	
	}
	else if ((stacks_[index1].size() > 0) && (stacks_[index2].size() > 0) && 
			(stacks_[index1].peekTop().getLength() < stacks_[index2].peekTop().getLength()))
	{
		return true;	
	}
	else 
	{
		return false;	
	}
}

// Default constructor to create the initial state:
Game::Game() {
  // Create the three empty stacks:
  for (int i = 0; i < 3; i++) {
    Stack stackOfCubes;
    stacks_.push_back( stackOfCubes );
  }

  // Create the four cubes, placing each on the [0]th stack:
  Cube blue(4, uiuc::HSLAPixel::BLUE);
  stacks_[0].push_back(blue);

  Cube orange(3, uiuc::HSLAPixel::ORANGE);
  stacks_[0].push_back(orange);

  Cube purple(2, uiuc::HSLAPixel::PURPLE);
  stacks_[0].push_back(purple);

  Cube yellow(1, uiuc::HSLAPixel::YELLOW);
  stacks_[0].push_back(yellow);
}

std::ostream& operator<<(std::ostream & os, const Game & game) {
  for (unsigned i = 0; i < game.stacks_.size(); i++) {
    os << "Stack[" << i << "]: " << game.stacks_[i];
  }
  return os;
}
