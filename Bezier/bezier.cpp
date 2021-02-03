/**
 * @file
 * @brief Bezier building class source file
 * @authors Vorotnikov Andrey
 * @date 03.02.2021
 *
 * Contains class to build Bezier spline realisation
 */

#include "bezier.h"

/**
 * Evaluate point with parameter
 * @param[in] t parameter from 0 to 1 to evaluate point of Bezier spline
 * @return point corresponding to parameter
 */
srm::vec_t srm::build_bezier_t::EvaluatePoint(double t) const {
  if (size() == 0)
    throw std::exception("No points added");
  std::vector<vec_t> segments(*this);
  
  while (segments.size() > 1) {
    auto iterator1 = segments.begin(), iterator2 = iterator1 + 1, iteratorEnd = segments.end();

    while (iterator2 != iteratorEnd) {
      *iterator1 = *iterator1 * (1 - t) + *iterator2 * t;
      iterator1 = iterator2;
      iterator2++;
    }

    segments.pop_back();
  }

  return segments[0];
}
