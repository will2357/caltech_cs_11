//
//  Point.hh
//  lecture1
//
//  Created by Will on 6/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

// A 2D point class! 
class Point {
    double x_coord, y_coord;    // Data-members 
public: 
    Point();                    // Constructors 
    Point(double x, double y); 
    ~Point();                   // Destructor 
    double getX();              // Accessors 
    double getY(); 
    void setX(double x);        // Mutators 
    void setY(double y); 
};