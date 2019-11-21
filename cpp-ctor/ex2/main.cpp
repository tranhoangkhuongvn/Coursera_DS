/**
 * C++ program using the Cube's one arugment constructor.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
#include <iostream>

int main() {
  uiuc::Cube c(2);
  std::cout << "Volume: " << c.getVolume() << std::endl;

  uiuc::Cube c1;
  std::cout << "Volume: " << c1.getVolume() << std::endl;
  return 0;
}
