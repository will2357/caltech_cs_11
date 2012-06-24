//
//  Point.cpp
//  lecture1
//  
//  Point Class Definition
//  
//  Created by Will on 6/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "Point.hh" 
#include <cmath>

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

// Returns X-coordinate of a Point
double Point::getX() {
    return x_coord; 
} 

// Returns Y-coordinate of a Point
double Point::getY() {
    return y_coord; 
} 


// Returns distance from origin of a Point
double Point::originDistance() {
    return sqrt(pow(x_coord, 2) + pow(y_coord, 2));
}

// Sets X-coordinate of a Point 
void Point::setX(double x) {
    x_coord = x; 
} 

// Sets Y-coordinate of a Point 
void Point::setY(double y) {
    y_coord = y; 
}