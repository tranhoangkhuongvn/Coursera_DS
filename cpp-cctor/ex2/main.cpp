/**
 * C++ program copying a Cube class.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;
#include <iostream>


Cube foo() {
  Cube c; //default constructor
  
  std::cout << "Invoke 1st copy constructor" << std::endl;
  return c; //invoke 1st copy constructor
}

int main() {
  Cube c2 = foo(); //invoke 2nd copy constructor
  std::cout << "Done invoke 2nd copy constructor" << std::endl; 
  return 0;
}
