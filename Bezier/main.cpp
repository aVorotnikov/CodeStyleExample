/**
 * @file
 * @brief Main program source file
 * @authors Vorotnikov Andrey
 * @date 03.02.2021
 *
 * Contains main function to start program
 */

/**
 * @mainpage Introduction
 * @author Vorotnikov Andrey

Processing with 2 dimensional vector program.
 */

#include <iostream>
#include "vector.h"

/**
 * Main program function
 * @return system code (0 if success)
 */
int main(void) {
  srm::vector2_t<> a, b(1, 2), c = a + b;
  c += srm::vector2_t<>(5, 6);
  c /= 2;

  std::cout << "(" << c.x << ", " << c.y << "): "<<
    c.Len() << ", " << c.Len2() << std::endl;

  c *= 3;
  c -= srm::vector2_t<>(4, 0);

  std::cout << "(" << c.x << ", " << c.y << "): " <<
    c.Len() << ", " << c.Len2() << std::endl;

  return 0;
}