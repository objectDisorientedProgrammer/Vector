/*
 * Vector.h
 *
 *  Created on: May 21, 2014
 *      Author: doug
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

  //virtual T getLength() = 0;

  virtual void add(const Vector<T>&) = 0;
  //virtual Vector<T> add(const Vector<T>&, const Vector<T>&) = 0;
  virtual Vector<T>& operator +(const Vector<T>&);

  virtual void subtract(const Vector<T>&) = 0;
  //virtual Vector<T> subtract(const Vector<T>&, const Vector<T>&) = 0;
  virtual Vector<T>& operator -(const Vector<T>&) = 0;

  virtual void multiply(const Vector<T>&) = 0;
  virtual void multiply(const T) = 0;
  //virtual Vector<T> multiply(Vector<T>&, Vector<T>&) = 0;
  virtual Vector<T>& operator *(const Vector<T>&) = 0;
  virtual Vector<T>& operator *(const T) = 0;

  virtual Vector<T>& crossProduct(const Vector<T>&, const Vector<T>&) = 0;
  virtual T dotProduct(const Vector<T>&, const Vector<T>&) = 0;

  template<typename T2>
  friend std::ostream& operator << (std::ostream&, const Vector<T2>&);
};

#endif /* VECTOR_H_ */
