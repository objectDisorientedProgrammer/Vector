/*
 * Vector.cpp
 *
 *  Created on: May 21, 2014
 *      Author: doug
 */

#include "Vector.h"

//template<typename T>
//Vector<T>::Vector() {}

template<typename T>
Vector<T>::~Vector() {}

template<typename T2>
std::ostream& operator << (std::ostream& outs, const Vector<T2>& vec)
{
  outs << vec;
  return outs;
}
