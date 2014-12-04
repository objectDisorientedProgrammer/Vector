/*
 * Vector2.h
 *
 *  Created on: May 21, 2014
 *      Author: doug
 */

#ifndef VECTOR2_H_
#define VECTOR2_H_

//#include "Vector.h"
#include <iostream>
#include <math.h>

template<typename T>
class Vector2// : public Vector<T>
{
public:
  Vector2();
  Vector2(T, T);
  //virtual ~Vector2();

  //T getLength();

  void add(const Vector2<T>&);
  //virtual Vector<T> add(const Vector<T>&, const Vector<T>&);
  Vector2<T>& operator +(const Vector2<T>&);

  void subtract(const Vector2<T>&);
  //virtual Vector<T> subtract(const Vector<T>&, const Vector<T>&);
  Vector2<T>& operator -(const Vector2<T>&);

  void multiply(const Vector2<T>&);
  void multiply(const T);
  //virtual Vector<T> multiply(Vector<T>&, Vector<T>&);
  Vector2<T>& operator *(const Vector2<T>&);
  Vector2<T>& operator *(const T);

  Vector2<T>& crossProduct(const Vector2<T>&, const Vector2<T>&);
  T dotProduct(const Vector2<T>&, const Vector2<T>&);

  template<typename T2>
  friend std::ostream& operator << (std::ostream&, const Vector2<T2>&);

protected:
  T x;
  T y;
};

#endif /* VECTOR2_H_ */
