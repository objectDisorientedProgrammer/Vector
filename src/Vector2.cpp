/*
 * Vector2.cpp
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

template<typename T>
double Vector2<T>::magnitude()
{
	return pow(this->x*this->x + this->y*this->y, 0.5);
}

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
Vector2<T>& Vector2<T>::operator /(const Vector2<T>& v2)
{
	this->x /= v2.x;
	this->y /= v2.y;
	return *this;
}

template<typename T>
Vector2<T>& Vector2<T>::operator /(const T number)
{
	this->x /= number;
	this->y /= number;
	return *this;
}

template<typename T>
T Vector2<T>::crossProduct(const Vector2<T>& v2)
{
	return this->x*v2.y - this->y*v2.x;
}

template<typename T>
T Vector2<T>::dotProduct(const Vector2<T>& v2)
{
	return this->x*v2.x + this->y*v2.y;
}

template<typename T2>
std::ostream& operator << (std::ostream& outs, const Vector2<T2>& vec)
{
  outs << "<" << vec.x << ", " << vec.y << ">";
  return outs;
}

