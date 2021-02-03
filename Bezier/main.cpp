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
#include <fstream>
#include <iomanip>
#include "bezier.h"

/**
 * Main program function
 * @return system code (0 if success)
 */
int main(void) {
  srm::vec_t a, b(1, 2), c = a + b;
  c += srm::vec_t(5, 6);
  c /= 2;

  std::cout << "(" << c.x << ", " << c.y << "): "<<
    c.Len() << ", " << c.Len2() << std::endl;

  c *= 3;
  c -= srm::vec_t(4, 0);

  std::cout << "(" << c.x << ", " << c.y << "): " <<
    c.Len() << ", " << c.Len2() << std::endl;

  srm::build_bezier_t bezier;
  bezier.resize(5);
  bezier[0] = srm::vec_t(0, 0);
  bezier[1] = srm::vec_t(-1, 2);
  bezier[2] = srm::vec_t(3, 2.01);
  bezier[3] = srm::vec_t(5, 0);
  bezier[4] = srm::vec_t(6.5, 1.5);

  std::ofstream outFile("out.txt");

  for (double t = 0; t <= 1; t += 0.001) {
    srm::vec_t tmp = bezier.EvaluatePoint(t);
    outFile << std::setprecision(20) << tmp.x << "   " << tmp.y << std::endl;
  }

  return 0;
}