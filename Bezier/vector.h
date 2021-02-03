/**
 * @file
 * @brief Vector class header file
 * @authors Vorotnikov Andrey
 * @date 03.02.2021
 *
 * Contains template 2 dimensional vector mathematician class
 */

#pragma once

#ifndef __VECTOR_H_INCLUDED
#define __VECTOR_H_INCLUDED

#include <cmath>

/* Project namespace */
namespace srm {
  /**
   * @brief 2 dimensional vector template class
   * @warning default vector type is double
   */
  template <typename vecType = double>
    class vector2_t {
    public:
      vecType
        x,  ///< x vector coordinate
        y;  ///< y vector coordinate

      /**
       * @defgroup vecConstructors Constructors of vector class
       * @brief 2 dimensional vector class constructors module
       *
       * @{
       */

      /**
       * Default constructor
       */
      vector2_t(void) : x(0), y(0) {
      }

      /**
       * Constructor for 2 numbers
       * @param[in] x0 x coordinate
       * @param[in] y0 y coordinate
       */
      vector2_t(vecType x0, vecType y0) : x(x0), y(y0) {
      }

      /**
       * Copy constructor
       * @param[in] v vector to copy
       */
      vector2_t(const vector2_t &v) : x(v.x), y(v.y) {
      }

      /**@}*/

      /**
       * @defgroup vecMath Math operation on vector
       * @brief 2 dimensional vector class operations module
       *
       * @{
       */

      /**
       * = operator function
       * @param[in] v vector to copy
       * @return each self
       */
      vector2_t & operator=(const vector2_t &v) {
        x = v.x;
        y = v.y;
        return *this;
      }

      /**
       * + operator function
       * @param[in] v vector to add
       * @return sum of vectors
       */
      vector2_t operator+(const vector2_t &v) {
        return vector2_t(x + v.x, y + v.y);
      }

      /**
       * += operator function
       * @param[in] v vector to add
       * @return each self
       */
      vector2_t & operator+=(const vector2_t &v) {
        x += v.x;
        y += v.y;
        return *this;
      }

      /**
       * - operator function
       * @param[in] v vector to dif
       * @return difference of vectors
       */
      vector2_t operator-(const vector2_t &v) {
        return vector2_t(x - v.x, y - v.y);
      }

      /**
       * -= operator function
       * @param[in] v vector to dif
       * @return each self
       */
      vector2_t & operator-=(const vector2_t &v) {
        x -= v.x;
        y -= v.y;
        return *this;
      }

      /**
       * * operator function
       * @param[in] a number to mul
       * @return multiplicated vector
       */
      vector2_t operator*(vecType a) {
        return vector2_t(x * a, y * a);
      }

      /**
       * *= operator function
       * @param[in] a number to mul
       * @return each self
       */
      vector2_t & operator*=(vecType a) {
        x *= a;
        y *= a;
        return *this;
      }

      /**
       * / operator function
       * @param[in] a number to div
       * @return divided vector
       */
      vector2_t operator/(vecType a) {
        return vector2_t(x / a, y / a);
      }

      /**
       * /= operator function
       * @param[in] a number to div
       * @return each self
       */
      vector2_t & operator/=(vecType a) {
        x /= a;
        y /= a;
        return *this;
      }

      /**
       * Dot multipling of 2 vectors function
       * @param[in] v vector to mul
       * @return dot multipling iof 2 vectors
       */
      vecType Dot(const vector2_t &v) {
        return x * v.x + y * v.y;
      }

      /**
       * Cross multipling of 2 vectors function
       * @param[in] v vector to mul
       * @return cross multipling iof 2 vectors
       */
      vecType Cross(const vector2_t &v) {
        return x * v.y - y * v.x;
      }

      /**
       * Length of vector function
       * @return vector length
       */
      vecType Len(void) {
        return sqrt(x * x + y * y);
      }

      /**
       * Squared length of vector function
       * @return square of vector length
       */
      vecType Len2(void) {
        return x * x + y * y;
      }

      /**@}*/
    };
};

#endif /* __VECTOR_H_INCLUDED */
