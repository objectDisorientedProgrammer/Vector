/*
 * Main.cpp
 *
 *  Created on: May 21, 2014
 *      Author: doug
 *
    Main.cpp - Demonstrates the Vector2 and Vector3 classes.
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

#include "Main.h"

void checkMagnitude(Vector2<int>, int expectedSquared);

int main()
{
  cout << "Vectors!!!!!!!!" << endl;
  Vector2<int> v1, v2(3,4), v3(-9,2);
  cout << "v1=" << v1 << endl;
  cout << "v2=" << v2 << endl;
  cout << "v3=" << v3 << endl;

  cout << "v1 cross v2" << endl;
  cout << v1.crossProduct(v2) << endl;
  cout << "v1=" << v1 << endl;
  cout << "v2=" << v2 << endl;

  cout << "+++ Adding v1.add(v2) +++" << endl;
  v1.add(v2);
  cout << "v1=" << v1 << endl;

  cout << "+++ Adding v1 + v3 +++" << endl;
  v1 + v3;
  cout << "v1=" << v1 << endl;

  cout << "*** Multiply v2 = v1 * 5 ***" << endl;
  v2 = v1 * 5; // ERROR multiplies v1 by 5 and keeps it that way
  v1 = v1 / 5; // correct error from line above

  cout << "v1=" << v1 << endl;
  cout << "v2=" << v2 << endl;

  cout << "--- Subtract v2 - v3 ---" << endl;
  v2-v3;
  cout << "v2=" << v2 << endl;
  cout << "v3=" << v3 << endl;

  cout << "checking vector magnitudes..." << endl;
  cout << "|v1| = ";
  checkMagnitude(v1, 72);
  cout << "|v2| = ";
  checkMagnitude(v2, 1225);
  cout << "|v3| = ";
  checkMagnitude(v3, 85);



  return 0;
}

void checkMagnitude(Vector2<int> vec, int expectedSquared)
{
	assert(vec.magnitude() == pow(expectedSquared, 0.5));
	cout << vec.magnitude() << " true." << endl;
}
