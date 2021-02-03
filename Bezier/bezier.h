/**
 * @file
 * @brief Bezier building class header file
 * @authors Vorotnikov Andrey
 * @date 03.02.2021
 *
 * Contains description of class to build Bezier spline
 */

#pragma once

#ifndef __BEZIER_H_INCLUDED
#define __BEZIER_H_INCLUDED

#include <vector>
#include "vector.h"

/* Project namespace */
namespace srm {
  using vec_t = vector2_t<>;

  /**
   * @brief Class to build bezier spline
   * @see vector_2
   *
   * Bezier building class based on std::vector
   */
  class build_bezier_t : public std::vector<vec_t> {
  public:
    /**
     * Evaluate point with parameter
     * @param[in] t parameter from 0 to 1 to evaluate point of Bezier spline
     * @return point corresponding to parameter
     */
    vec_t EvaluatePoint(double t) const;
  };
}

#endif /* __BEZIER_H_INCLUDED */

