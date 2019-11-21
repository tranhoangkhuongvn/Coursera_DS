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
  Cube myCube = c; //copy constructor
  Cube a;
  a = c;
  return 0;
}
