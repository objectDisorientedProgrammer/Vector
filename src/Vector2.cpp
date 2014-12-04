/*
 * Vector2.cpp
 *
 *  Created on: May 21, 2014
 *      Author: doug
 */

#include "Vector2.h"

template<typename T>
Vector2<T>::Vector2()
{
  this->x = 0;
  this->y = 0;
}

template<typename T>
Vector2<T>::Vector2(T xValue, T yValue)
{
  this->x = xValue;
  this->y = yValue;
}

//template<typename T>
//Vector2<T>::~Vector2() {}
/*
template<typename T>
T getLength()
{
	return sqrt(double(x * x + y * y));
}
*/
template<typename T>
void Vector2<T>::add(const Vector2<T>& otherVector)
{
  this->x += otherVector.x;
  this->y += otherVector.y;
}

template<typename T>
Vector2<T>& Vector2<T>::operator +(const Vector2<T>& otherVector)
{
  this->x += otherVector.x;
  this->y += otherVector.y;
  return *this;
}

template<typename T>
void Vector2<T>::subtract(const Vector2<T>& otherVector)
{
  this->x -= otherVector.x;
  this->y -= otherVector.y;
}

template<typename T>
Vector2<T>& Vector2<T>::operator -(const Vector2<T>& otherVector)
{
  this->x -= otherVector.x;
  this->y -= otherVector.y;
  return *this;
}

template<typename T>
void Vector2<T>::multiply(const Vector2<T>& otherVector)
{
  this->x *= otherVector.x;
  this->y *= otherVector.y;
}

template<typename T>
void Vector2<T>::multiply(const T scalar)
{
  this->x *= scalar;
  this->y *= scalar;
}

template<typename T>
Vector2<T>& Vector2<T>::operator *(const Vector2<T>& otherVector)
{
  this->x *= otherVector.x;
  this->y *= otherVector.y;
  return *this;
}

template<typename T>
Vector2<T>& Vector2<T>::operator *(const T scalar)
{
  this->x *= scalar;
  this->y *= scalar;
  return *this;
}

template<typename T>
Vector2<T>& Vector2<T>::crossProduct(const Vector2<T>&, const Vector2<T>&)
{

}

template<typename T>
T Vector2<T>::dotProduct(const Vector2<T>&, const Vector2<T>&)
{

}

template<typename T2>
std::ostream& operator << (std::ostream& outs, const Vector2<T2>& vec)
{
  outs << "<" << vec.x << ", " << vec.y << ">";
  return outs;
}

