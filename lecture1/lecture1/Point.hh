//
//  Point.hh
//  lecture1
//  
//  Point Class Declaration
//
//  Created by Will on 6/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
// 


class Point {
    double x_coord, y_coord;    // Data-members 
// Public Members
public: 
    Point();                    // Constructors 
    Point(double x, double y); 
    ~Point();                   // Destructor 
    double getX();              // Accessors 
    double getY(); 
    double originDistance();
    void setX(double x);        // Mutators 
    void setY(double y); 
};