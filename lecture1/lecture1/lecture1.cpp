//
//  lecture1.cpp
//  lecture1
//
//  Created by Will on 6/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "Point.hh"

using namespace std;


// Outputs the Point
void outputPoint(Point &p) { 
    cout << "(" << p.getX() 
    << "," << p.getY() << ")"; 
}

void rotate90(Point &p) { 
    double x = p.getX(); 
    double y = p.getY(); 
    p.setX(y); 
    p.setY(-x); 
}

int main() {
    cout << "Hello, world!" << endl;

    string name = "series";
    int n = 15;
    double sum = 35.2;
        
    cout << "name = " << name << endl
         << "n = " << n << endl
         << "sum = " << sum << endl;
    
    float x, y;
    
    cout << "Enter x and y coordinates:  ";
    
    cin >> x >> y;
    
    double distance =  sqrt(pow(x, 2) + pow(y, 2));
    
    cout << "Distance from the origin is " << distance << endl;
    
    Point p1;
    Point p2 (3, 5);
    
    p1.setX(210); 
    p1.setY(154); 
    
    cout << "P1 = (" << p1.getX() 
         << "," << p1.getY() << ")" << endl; 
    
    cout << "P2 = (" << p2.getX() 
         << "," << p2.getY() << ")" << endl; 
    
    cout << "P2 = ";
    outputPoint(p2);
    cout << endl;
    
    cout << "P2 distance from origin = " << p2.originDistance();
    
    rotate90(p2);

    cout << "P2 Rotated 90 degrees = (" << p2.getX() 
         << "," << p2.getY() << ")" << endl; 
    

    
    return 0;
}