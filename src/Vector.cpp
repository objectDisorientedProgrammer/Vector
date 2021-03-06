/*
 * Vector.cpp
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
