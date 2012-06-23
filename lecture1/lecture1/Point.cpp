//
//  Point.cpp
//  lecture1
//
//  Created by Will on 6/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "Point.hh" 

// Default (aka no-argument) constructor
Point::Point() {
    x_coord = 0; 
    y_coord = 0; 
} 

// Two-argument constructor - sets point to (x, y) 
Point::Point(double x, double y) { 
    x_coord = x; 
    y_coord = y; 
} 

// Cleans up a Point instance. 
Point::~Point() { 
    // no dynamically allocated resources, so doesn't do anything
}