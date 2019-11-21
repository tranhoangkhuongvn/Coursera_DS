/**
 * C++ program using the Cube's one arugment constructor.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
#include <iostream>

int main() {
  uiuc::Cube c1;  // !!!
  uiuc::Cube c2(10);
  std::cout << "Default Volume: " << c1.getVolume() << std::endl;
  std::cout << "Custom Volume: " << c2.getVolume() << std::endl;
  return 0;
}
