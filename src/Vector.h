/*
 * Vector.h
 *
 *  Created on: May 21, 2014
 *      Author: doug
 *
    Vector base class (to be inherited from).
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

#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>
#include <math.h>

template<typename T>
class Vector
{
public:
  //Vector();
  virtual ~Vector();

  virtual double magnitude() = 0;

  virtual void add(const Vector<T>&) = 0;
  //virtual Vector<T> add(const Vector<T>&, const Vector<T>&) = 0;
  virtual Vector<T>& operator +(const Vector<T>&); 		// Add the parameter vector to this vector

  virtual void subtract(const Vector<T>&) = 0;
  //virtual Vector<T> subtract(const Vector<T>&, const Vector<T>&) = 0;
  virtual Vector<T>& operator -(const Vector<T>&) = 0;	// Subtract the parameter vector by this vector

  virtual void multiply(const Vector<T>&) = 0;
  virtual void multiply(const T) = 0;
  //virtual Vector<T> multiply(Vector<T>&, Vector<T>&) = 0;
  virtual Vector<T>& operator *(const Vector<T>&) = 0;	// Multiply a vector by the parameter vector
  virtual Vector<T>& operator *(const T) = 0;			// Multiply a vector by a constant value


  virtual Vector<T>& operator /(const Vector<T>&) = 0;	// Divide a vector by the parameter vector
  virtual Vector<T>& operator /(const T) = 0;			// Divide a vector by a constant value

  // cross product would go here but its output varies based on vector type.
  virtual T dotProduct(const Vector<T>&) = 0;			// Take the dot product of this vector & the parameter vector

  template<typename T2>
  friend std::ostream& operator << (std::ostream&, const Vector<T2>&);
};

#endif /* VECTOR_H_ */
