//
//  lecture1.cpp
//  lecture1
//
//  Created by Will on 6/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

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
    
    double distance =  sqrt(pow(x,2) + pow(y,2));
    
    cout << "Distance from the origin is " << distance << endl;
    
    return 0;
}
