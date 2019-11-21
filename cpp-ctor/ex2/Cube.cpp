/**
 * Simple C++ class for representing a Cube (with constructors).
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */
#include <iostream>
#include "Cube.h"

namespace uiuc {
  Cube::Cube() {
    length_ = 1;
	std::cout << "Default constructor with zero input" << std::endl;
  }

  Cube::Cube(double length) {
    length_ = length;
	std::cout << "Custom default constructor with 1 input" << std::endl;
  }

  double Cube::getVolume() {
    return length_ * length_ * length_;
  }

  double Cube::getSurfaceArea() {
    return 6 * length_ * length_;
  }

  void Cube::setLength(double length) {
    length_ = length;
  }
}
