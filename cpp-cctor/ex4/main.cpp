/**
 * C++ program copying a Cube class. 
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
using uiuc::Cube;

int main() {
  Cube c; //default constructor
  Cube myCube; //default constructor

  myCube = c; //not invoke copy constructor

  return 0;
}
