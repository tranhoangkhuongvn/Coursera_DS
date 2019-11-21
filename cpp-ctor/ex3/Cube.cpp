/**
 * Simple C++ class for representing a Cube (custom constructor, no default).
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */
#include <iostream>
#include "Cube.h"

namespace uiuc {
  Cube::Cube()  {
 	std::cout << "Default constructor called ... " << std::endl;
	length_ = 5; 
  }
  
  Cube::Cube(double length) {
  	std::cout << "Custom constructor called ..." << std::endl;
    length_ = length;
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
