/**
 * C++ program invoking Cube's assignment operator.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
using uiuc::Cube;

int main() {
  Cube c; //invoke default constructor
  
  Cube myCube; //invoke default constructor

  myCube = c; //invoke copy assignment operation

  return 0;
}
