/*
 * Vector3.h
 *
 *  Created on: Dec 3, 2014
 *      Author: doug
 *
 *  See Vector.h for explanations of operators and functions.
 *
    3D Vector class.
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

#ifndef VECTOR3_H_
#define VECTOR3_H_

#include "Vector.h"

class Vector3: public Vector2
{
public:
	Vector3();
	virtual ~Vector3();
};

#endif /* VECTOR3_H_ */
