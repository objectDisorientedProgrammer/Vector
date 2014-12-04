/*
 * Vector2.h
 *
 *  Created on: May 21, 2014
 *      Author: doug
 *
 *  See Vector.h for explanations of operators and functions.
 *
    2D Vector class.
    Copyright (C) 2014  Douglas Chidester

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef VECTOR2_H_
#define VECTOR2_H_

#include <iostream>
#include <math.h>

template<typename T>
class Vector2// : public Vector<T>
{
public:
  Vector2();
  Vector2(T, T);
  //virtual ~Vector2();

  double magnitude();

  void add(const Vector2<T>&);
  Vector2<T>& operator +(const Vector2<T>&);

  void subtract(const Vector2<T>&);
  Vector2<T>& operator -(const Vector2<T>&);

  void multiply(const Vector2<T>&);
  void multiply(const T);
  Vector2<T>& operator *(const Vector2<T>&);
  Vector2<T>& operator *(const T);

  Vector2<T>& operator /(const Vector2<T>&);
  Vector2<T>& operator /(const T);

  T crossProduct(const Vector2<T>&);
  T dotProduct(const Vector2<T>&);

  template<typename T2>
  friend std::ostream& operator << (std::ostream&, const Vector2<T2>&);

protected:
  T x;
  T y;
};

#endif /* VECTOR2_H_ */
